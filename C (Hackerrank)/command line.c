#include<stdio.h>
int main(int argc, char * argv[])
{
   int count;
   printf("program name is :%s",argv[0]);
   if(argc==1)
   {
       printf("no argunment passed");
   }
   if(argc>=2)
   {
       printf("\n number of argunment %d",argc);
   }
   printf("\n Following are the argument");
   for( count=0;count<argc;count++)
   {
       printf("\n argv[%d]= %s",count,argv[count]);
   }
   
}