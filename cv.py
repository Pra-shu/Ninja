import math
def power(x, y, p) : 
    res = 1    
  
    x = x % p  
      
    if (x == 0) : 
        return 0
  
    while (y > 0) : 
          
      
        if ((y & 1) == 1) : 
            res = (res * x) % p 
   
        y = y >> 1      
        x = (x * x) % p 
          
    return res  


n=10**18
mod=20092010
x=int(n//2000)
print(power(2,x+1,mod))

