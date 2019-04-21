

clear all;


%a systematic parity check matrix of the same size. based on the equations
%below
% e1 = c1 xor c2 xor c3 xor c5
% e2 = c1 xor c2 xor c4 xor c6
% e3 = c1 xor c3 xor c4 xor x7
H = [1,1,1,0,1,0,0;
     1,1,0,1,0,1,0;
     1,0,1,1,0,0,1];
 
                                                        % an all-zero row causes gh2sys to fail

% H1 = gh2sys(H);                                      % convert to systematic form H1 = [I|P]
% G = [H1(:,4:7)' eye(4)];                                 % obtain genertaor matrix = [P'|I]. to verify, mod(G*H',2) = 0


% encoding
msg(1,:) = [1 0 1 0];          % generate binary message block
% msg(2,:) = [1 1 0 0]; 


code(1,:) = ldpcenc(msg(1,:))                    % encoding
% code(2,:) = ldpcenc(msg(2,:))                    % encoding

% code(1,:) = ldpccustom(msg(1,:));                    % encoding
% code(2,:) = ldpccustom(msg(2,:))                    % encoding








