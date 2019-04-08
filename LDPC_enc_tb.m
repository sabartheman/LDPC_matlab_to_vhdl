

clear all;


%generated a 3x7 parity check matrix for 4 bit data encoding
H = [1,0,0,1,0,1,1;
     0,1,0,1,1,1,0;
     0,0,1,0,1,1,1];
 
 
% H = H(:,[10 1 8 2 3 4 5 6 7 9 12 11]);                  % simple columns operations to obtain an equivalent code

% to avoid all-zero rows
                                                        % an all-zero row causes gh2sys to fail

H1 = gh2sys(H);                                      % convert to systematic form H1 = [I|P]
G = [H1(:,4:7)' eye(4)];                                 % obtain genertaor matrix = [P'|I]. to verify, mod(G*H',2) = 0


% encoding
msg(1,:) = [1 0 1 0];          % generate binary message block
msg(2,:) = [1 1 1 0]; 


code(1,:) = ldpcenc(msg(1,:));                    % encoding
code(2,:) = ldpcenc(msg(2,:))                    % encoding








