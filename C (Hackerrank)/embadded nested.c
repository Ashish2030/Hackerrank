#include<stdio.h>
struct phonebook
{
     long int mobile;
         struct name
          {
           char fname[20];
           char lname[20];
          }phonenumber;
   
}p1;

int main()
{
   
    printf("ENTER FIRST PERSON NAME\n");
    scanf("%s",p1.phonenumber.fname);
     scanf("%s",p1.phonenumber.lname);
     scanf("%ld",&p1.mobile);
     printf("Name = %s ",p1.phonenumber.fname);
     printf("%s\n",p1.phonenumber.lname);
     printf("number= %ld",p1.mobile);
}
