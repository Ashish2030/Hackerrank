#include <stdio.h>  
   int isHappyNumber(int a)
   {  
    int c= 0, sum = 0;  
        
    while(a > 0)
	{  
        c = a%10;  
        sum = sum + (c*c);  
        a = a/10;  
    }  
    return sum;  
}  
      
int main()  
{  
    int num = 82;  
    int b = num;  
      
    while(b != 1 && b != 4)
	{  
        b = isHappyNumber(b);  
    }  
  
    if(b == 1)  
        printf("%d is a happy number", num);  
    
    else if(b == 4)  
        printf("%d is not a happy number", num);   
   
    return 0;  
}  