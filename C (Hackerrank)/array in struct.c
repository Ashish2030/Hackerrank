#include <stdio.h>
#include <string.h>
 
struct student 
{
     int id;
     char name[30];
     float percentage;
};
 
int main() 
{
     int i;
     struct student record1 = {1, "Raju", 90.5};
     struct student record2 = {2, "Mani", 93.5};
 
     printf("Records of STUDENT1: \n");
     printf("  Id is: %d \n", record1.id);
     printf("  Name is: %s \n", record1.name);
     printf("  Percentage is: %f \n\n", record1.percentage);
 
     printf("Records of STUDENT2: \n");
     printf("  Id is: %d \n", record2.id);
     printf("  Name is: %s \n", record2.name);
     printf("  Percentage is: %f \n\n", record2.percentage);
 
     return 0;
}
/*
#include <stdio.h>
#include <string.h>
 
struct student 
{
     int id;
     char name[30];
     float percentage;
};
 
int main() 
{
     int i;
     struct student record[2];
 
     // 1st student's record
     record[0].id=1;
     strcpy(record[0].name, "Raju");
     record[0].percentage = 86.5;
 
     // 2nd student's record         
     record[1].id=2;
     strcpy(record[1].name, "Surendren");
     record[1].percentage = 90.5;
 
     // 3rd student's record
     record[2].id=3;
     strcpy(record[2].name, "Thiyagu");
     record[2].percentage = 81.5;
 
     for(i=0; i<3; i++)
     {
         printf("     Records of STUDENT : %d \n", i+1);
         printf(" Id is: %d \n", record[i].id);
         printf(" Name is: %s \n", record[i].name);
         printf(" Percentage is: %f\n\n",record[i].percentage);
     }
     return 0;
}
*/