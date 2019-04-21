
%a systematic generator matrix for LDPC codes
% G = [1,0,0,0,1,1,1;
%      0,1,0,0,1,1,0;
%      0,0,1,0,1,0,1;
%      0,0,0,1,0,1,1]

%a systematic parity check matrix of the same size. based on the equations
%below
% e1 = c1 xor c2 xor c3 xor c5
% e2 = c1 xor c2 xor c4 xor c6
% e3 = c1 xor c3 xor c4 xor x7
H = [1,1,1,0,1,0,0;
     1,1,0,1,0,1,0;
     1,0,1,1,0,0,1]

%input systematic code 4 data bits and 3 parity bits
code =  [1,0,1,0,0,1,0];
    
 
%number of iterations the decoder will run through
iter = 100;
 
decoded = bf(code,iter)
 
 

