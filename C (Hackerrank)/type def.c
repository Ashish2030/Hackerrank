 #include <stdio.h>
int main()
{
    typedef struct student
{
 int a,b,c;
}stud1 ;
    stud1 s1;
    s1.a=10;
    s1.b=4;
    s1.c=9;
    if(s1.a>s1.b&&s1.a>s1.c)
    {
        printf("%d",s1.a);
    }
     else if(s1.b>s1.a&&s1.b>s1.a)
    {
        printf("%d",s1.a);
    }
     else
    {
        printf("%d",s1.c);
    }

	return 0;
}