
close all
clear

np = 2048;
% 
% x = [1, 1,-1,-1, 1,-1,-1;
%      1,-1, 1,-1,-1,-1, 1]   
%  
% test = exp(4*x)
 x = linspace(-10,10,np) ;

 for i = 1:1:np
    y(i) = call_custom_exp(x(i));
 end

% z = call_custom_exp_fixpt(x(1,:),x(2,:))

% plot( x, y );