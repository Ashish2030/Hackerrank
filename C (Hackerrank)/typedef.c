 #include <stdio.h>
 #include<string.h>

int main()
{
    typedef struct student
{
 char name[20];
  int roll;
  char  section[20];
  float cgpa;
}stud1 ;

    stud1 s1;
    strcpy(s1.name,"ashish");
    s1.roll=10;
    strcpy(s1.section,"6'1'");
    s1.cgpa=9.87;
printf("Name is %s\n",s1.name);
printf("Roll number is %d\n",s1.roll);
printf("section is %s\n",s1.section);
printf("cgpa is %.2f",s1.cgpa);
	return 0;
}