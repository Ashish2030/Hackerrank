#include<stdio.h>
int prime(int );
int main()
{
	int a;
	scanf("%d",&a);
     int c=prime(a);
     if(c==1)
     {
     	printf("prime");
	 }
	 else
	 {
	 	printf("not prime");
	 }
	 return 0;
 }
 int prime(int a)
 {
 	int flag=1;
	for(int i=2;i<a/2;i++)
	{
		if(a%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
	return 1;
	}
	else
	{
	    return 0;
	}

}