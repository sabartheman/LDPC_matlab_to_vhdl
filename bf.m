% file name:    bf.m
% description:  out = bf(r,H,n) performs bit-flipping decoding for an ldpc code specified by the parity-check matrix H,
%               where r is the received binary sequence, and n the number of decoding iterations.
% algorithm:    bit flipping decoding
% author:       y. jiang 
% date:         june 2010
% revision:     1.0


function out = bf(r,iter)
 
flg = 1;
k = 1;

H = [1,1,1,0,1,0,0;
     1,1,0,1,0,1,0;
     1,0,1,1,0,0,1];
 
max = 0;
error = zeros(1,7);

for i = 1:iter
    ck = r*H';
    ck = mod(ck,2);                     %check vector, will show which equations failed

    tmp = ck*H;                         % tmp lists the number of failed parity checks for each bit
    flg = any(tmp);
    

    
    for j = 1:7
       if(and((tmp(j) >= max),(tmp(j) > 0)))
           max = tmp(j);
           error(j) = tmp(j);
       end
    end
    
    for j = 1:7
       if(and((error(j) == max),(flg == 1)))
          r(j) ~= r(j); 
       end
    end
    

end


out  = r;