#include <stdio.h>
struct student
{
    int age;
   
};
typedef struct student stud1;
int main() 
{
    stud1 ashi;
    scanf("%d",&ashi.age);
    printf("%d",ashi.age);
	
	return 0;
}