 #include <stdio.h>
 #include<string.h>
struct student
{
 char name[20];
  int roll;
  int section;
  float cgpa;
}stud1;

int main()
{
    strcpy(stud1.name,"ashish");
    stud1.roll=10;
    stud1.section=6;
    stud1.cgpa=9.87;
printf("Name is %s\n",stud1.name);
printf("Roll number is %d\n",stud1.roll);
printf("Section is %d\n",stud1.section);
printf("cgpa is %.2f",stud1.cgpa);
	return 0;
}