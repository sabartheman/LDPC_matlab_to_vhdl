code = [0,0,1,1,0,1,0];
        %0,1,0,1,1,1,0]
    
    
%if data is corrupted before this point nothing is corrected in the end.
tx = -2*(code - 0.5);

% corrupting a bit - to see if the method actually works
% fprintf("\nBit now corrupted corruption\n")
% tx(1,7) = -1
%  
% tx


% noise injection can disrupt the value if bad enough.

% ebn0 = 5;                                               % eb/n0, dB
% ebn0_1 = 10.^(ebn0/10);                                 % linear scale
% esn0 = ebn0_1*1/2;                                      % es/n0 = eb/n0*coding rate
%  
% 
% es = 1;
% n0 = es/esn0;
% sigma = sqrt(n0/2);                                     % noise variance
% noise = sigma*randn(size(tx));
r = tx; %+ noise  



nn = 1;    
    
    
% decoding
iter = 1000;                                               % 5 iterations for each decoding
for k = 1:nn
    if rem(k,100) == 0 & rem(k,500) ~= 0
%         fprintf('... ');
    elseif rem(k,500) == 0
%         fprintf('...\n');
    end
    [decoded(k,:)] = ldpcdec(r(k,:),iter);              % decoding
end

% output = round(((decoded -.5)/-2))
% dataout = decoded(:,4:7)   %this is the original data
% code
