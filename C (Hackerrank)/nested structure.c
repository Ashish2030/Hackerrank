#include<stdio.h>
struct name 
{
    char fname[20];
    char lname[20];
};
struct phonebook
{
    struct name personname;
     long int mobile;
};
int main()
{
    struct phonebook p1;
    printf("ENTER FIRST PERSON NAME\n");
    scanf(" %s",p1.personname.fname);
     scanf("%s",p1.personname.lname);
     scanf("%ld",&p1.mobile);
     printf("Name = %s ",p1.personname.fname);
     printf("%s\n",p1.personname.lname);
     printf("number= %ld",p1.mobile);
}
