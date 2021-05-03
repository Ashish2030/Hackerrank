 #include <stdio.h>
int main()
{
    typedef struct student
{
 int a,b,c;
}stud1 ;
    stud1 s1;
   scanf("%d",&s1.a);
   scanf("%d",&s1.b);
   scanf("%d",&s1.c);
       if(s1.a>s1.b&&s1.a>s1.c)
    {
        printf("%d",s1.a);
    }
     else if(s1.b>s1.a&&s1.b>s1.c)
    {
        printf("%d",s1. b);
    }
     else
    {
        printf("%d",s1.c);
    }

	return 0;
}