#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct student 
{
    int r;
    char name[0];
    
};
int main()
{
   
    struct student *cq1=(struct student*)malloc (sizeof(struct student)+sizeof(char)*20);
    cq1->r=200;
    strcpy(cq1->name,"Ram");
    printf("%d%s\n",cq1->r,cq1->name);
    	return 0;
}