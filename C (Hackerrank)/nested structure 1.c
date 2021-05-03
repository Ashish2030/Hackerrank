#include <stdio.h>
#include <string.h>
struct student_college_detail
{
    int college_id;
    char college_name[50];
};
struct student_detail 
{
    int id;
    char name[20];
    float percentage;
    // nested struct
    struct student_college_detail clg_data;
}stu_data;
 int main() 
{
 //   struct student_detail stu_data = {1, "Raju", 90.5, 711 ,"Anna University"};
     struct student_detail stu_data;
         scanf("%d",&stu_data.id);
      scanf("%s",&stu_data.name);
       scanf("%f",&stu_data.percentage);
        scanf("%d",&stu_data.clg_data.college_id);
         scanf("%s",&stu_data.clg_data.college_name);
    printf(" Id is: %d \n", stu_data.id);
    printf(" Name is: %s \n", stu_data.name);
    printf(" Percentage is: %f \n\n", stu_data.percentage);
     printf(" College Id is: %d \n",    stu_data.clg_data.college_id);
    printf(" College Name is: %s \n", stu_data.clg_data.college_name);
    return 0;
}