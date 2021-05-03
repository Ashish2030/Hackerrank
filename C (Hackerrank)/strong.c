#include<stdio.h>
int main()
{
    int a,c,fact,sum=0,d;
    
    scanf("%d",&d);
    a=d;
        while(a>0)
    {
    	c=a%10;
    	 fact=1;
      for(int i=1;i<=c;i++)
     
      {
          fact=fact*i;
	  }
	 	   sum=sum+fact;
	   	   a=a/10;
   }
 
if(d==sum)
{
	printf("yes");
}
else
{
	printf("no");
}  
}
    	
       