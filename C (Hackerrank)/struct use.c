 #include <stdio.h>
struct student
{
 char name[20];
  int roll;
  int section;
  float cgpa;
}stud1;

int main()
{
    scanf("%s",stud1.name);
     scanf("%d",&stud1.roll);
     scanf("%d",&stud1.section);
      scanf("%f",&stud1.cgpa);
    
printf("Name is %s\n",stud1.name);
printf("Roll number is %d\n",stud1.roll);
printf("Section is %d\n",stud1.section);
printf("cgpa is %.2f",stud1.cgpa);
	return 0;
}