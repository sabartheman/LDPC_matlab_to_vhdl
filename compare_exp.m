 x = [1, 1,-1,-1, 1,-1,-1;
      1,-1, 1,-1,-1,-1, 1]   

  
  
  test1 = exp(4*x);
  
  test2 = zeros(2,7);
  
  
  for i = 1:2
     for j = 1:7
        test2(i,j) = call_custom_exp_wrapper_fixpt(x(i,j)); 
     end
  end
  
  
  if( test1 == test2) 
     fprintf(" ........ Passed ...........\n"); 
  
  else
     fprintf(" ........ Failed ...........\n");
     
  end