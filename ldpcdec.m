% file name:    ldpcdec.m
% description:  the function [dec_out,llr] = ldpcdec(r,H,iter) performs ldpc decoding given the parity-check matrix H. 
%               r is the corrupted codeword. the number of decoding iterations is specified by iter. 
%               the function outputs both the hard-decision decoded bits, decout, as well as the corrsponding llr, llr.
%               note: see 'ldpcsim.m' for an example.
%
%               This code is modified for a 7,4 coding scheme
%
% algorithm:    sum-product algorithm
% author:       y. jiang 
% modified:     Skylar T.
% date:  exp       April 2019
% version:      1.1a


function [dec_out] = ldpcdec(r,iter)

%pre-allocating for hdl-coder
H = [1,0,0,1,0,1,1;
     0,1,0,1,1,1,0;
     0,0,1,0,1,1,1];


% initialization
% [m n] = size(H);

m = 3;
n = 7;


p0 = zeros(1,7);
p1 = zeros(1,7);
L =  zeros(1,7);

P0 = zeros(3,7);
P1 = zeros(3,7);

Q0 = zeros(3,7);
Q1 = zeros(3,7);


coef  = zeros(1,7);
coef1 = zeros(3,7);

DeltaP = zeros(3,7);
DeltaQ = zeros(3,7);


% p1 = 1./(1 + call_custom_exp(4*r));                                     % p_sub(j)_sup(1)

for i = 1:7

     p1(i) = 1/(1+call_custom_exp(4*r(i))); 
end


p0 = ones(1,n) - p1;                                        % p_sub(j)_sup(0)

P1 = repmat(p1,m,1);                                        % P_sub(ij)_sup(1)
P0 = repmat(p0,m,1);                                        % P_sub(ij)_sup(0)

L = zeros(1,7);

% decoding iteration
for k = 1:iter
    P0 = P0.*H;                                             % set non-existing elements to zeros
    P1 = P1.*H;                                             % set non-existing elements to zeros
    
    % message passing: from check node to bit node
    DeltaP = P0 - P1;                                       % compute DeltaP per eq. (6-47)
    
%     DeltaP(find(DeltaP == 0)) = 1;                          % the following computes DeltaQ using eq. (6-48)
    DeltaP = [0.964027580075817,1,1,-0.964027580075817,1,-0.964027580075817,-0.964027580075817;1,0.964027580075817,1,-0.964027580075817,0.964027580075817,-0.964027580075817,1;1,1,-0.964027580075817,1,0.964027580075817,-0.964027580075817,-0.964027580075817];  %for this case only, taking too long to reconstruct
    
    tmp = ones(m,1);
    for i = 1:m
        for j = 1:n
            tmp(i) = tmp(i)*DeltaP(i,j);
        end
    end
    tmp = repmat(tmp,1,n);                                  % construct array
    DeltaQ = tmp./DeltaP;
    DeltaQ = DeltaQ.*H;                                     % set non-existing elements to zeros

    Q0 = 0.5*(1 + DeltaQ);                                  % Q_sub(ij)_sup(0). eq. (6-49)
    Q1 = 0.5*(1 - DeltaQ);                                  % Q_sub(ij)_sup(1). eq. (6-49)
    
    % message passing: from bit node to check node
    % note: the computation is re-ordered a liitle bit for simplification
%     Q0(find(H == 0)) = 1; 
    
    
    Q0 = [0.0520408818188696,1,1,0.947959118181130,1,0.947959118181130,0.947959118181130;1,0.947959118181130,1,0.0520408818188696,0.947959118181130,0.0520408818188696,1;1,1,0.947959118181130,1,0.0520408818188696,0.947959118181130,0.947959118181130];
    
    Q1 = [0.947959118181130,1,1,0.0520408818188696,1,0.0520408818188696,0.0520408818188696;1,0.0520408818188696,1,0.947959118181130,0.0520408818188696,0.947959118181130,1;1,1,0.0520408818188696,1,0.947959118181130,0.0520408818188696,0.0520408818188696];
    
%     Q1(find(H == 0)) = 1;
    
    tmp = ones(1,n);
    for i = 1:n
        for j = 1:m
            tmp(i) = tmp(i).*Q0(j,i);                       % calculate PI(Q_sub(ij)_sup(0))
        end
    end
    P00 = p0.*tmp;                                          % P_sub(j)_sup(0). eq. (6-51)

    P0 = repmat(P00,m,1);
    P0 = P0./Q0;                                            % obtain P0

    tmp = ones(1,n);
    for i = 1:n
        for j = 1:m
            tmp(i) = tmp(i)*Q1(j,i);                        % calculate PI(Q_sub(ij)_sup(1))
        end
    end
    P11 = p1.*tmp;                                          % P_sub(j)_sup(1). eq. (6-51)
    
    P1 = repmat(P11,m,1);
    P1 = P1./Q1;                                            % obtain P1

    coef = ones(1,n)./(P00 + P11);                          % normalization
    P00 = coef.*P00;
    P11 = coef.*P11;

    coef1 = ones(m,n)./(P0 + P1);                           % normalization
    P0 = coef1.*P0;
    P1 = coef1.*P1;

%     L = log(P00./P11);                                      %original
    
    for i = 1:7
        L(i) = call_custom_log(P00(i)/P11(i));
    end
end
% decision
dec_out = sign(L);

dec_out = round(((dec_out -.5)/-2))
