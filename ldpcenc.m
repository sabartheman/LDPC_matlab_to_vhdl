% file name:    ldpcenc.m
% description:  codedout = ldpcenc(m,G) performs ldpc encoding given the message block m and the generator matrix G.
%               see 'ldpcsim.m' for an example.
%               note that the function actually applies to binary block encoding in general.
%   
%               This code is modified for a 7,4 coding scheme
%
% algorithm:    c = m*G
% author:       y. jiang 
% modified:     Skylar T.
% date:         april 2019
% revision:     1.1a

function codedout = ldpcenc(m)



%pre-allocating, hdl-coder doesn't like passing arrays, since vhdl doesn't
%have any support for passing an array
%a systematic generator matrix for LDPC codes
G = [1,0,0,0,1,1,1;
     0,1,0,0,1,1,0;
     0,0,1,0,1,0,1;
     0,0,0,1,0,1,1];

%might be able to replace this with a xor gate and a multiply, but will
%leave for now
codedout = mod(m*G,2);
