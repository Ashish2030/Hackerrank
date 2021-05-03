#include <stdio.h>
struct student
{
    char name[50];
    int age;
}s1;
void display(char a[20] ,int);
int main()
{
    
    printf("Enter name: ");
    scanf("%[^\n]%*c", s1.name);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    
    display(s1.name,s1.age);   // passing struct as an argument
    
    return 0;
}
void display(char a[20],int b) 
{
  printf("\nDisplaying information\n");
  printf("Name: %s", a);
  printf("\nAge: %d", b);
}