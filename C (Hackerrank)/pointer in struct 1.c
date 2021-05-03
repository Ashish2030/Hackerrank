#include <stdio.h>
struct student
{
    int age;
    float weight;
};
int main() 
{
	struct student *person1,person;
	 person1=&person;
	 scanf("%d",&person1->age);
	  scanf("%f",&person1->weight);
	  printf("%d\n",person1->age);
	  printf("%f",person1->weight);
	return 0;
}