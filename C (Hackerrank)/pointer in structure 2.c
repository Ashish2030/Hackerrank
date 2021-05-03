#include <stdio.h>
struct my_structure
{
    char name[20];
    int number;
    int rank;
};
int main()
{
    struct my_structure variable;
    struct my_structure *ptr;
    scanf("%s",&variable.name);
     scanf("%d",&variable.number);
      scanf("%d",&variable.rank);
      
    ptr = &variable;
     
    printf("NAME: %s\n", (*ptr).name);
    printf("NUMBER: %d\n", (*ptr).number);
    printf("RANK: %d", (*ptr).rank);

    return 0;
}
