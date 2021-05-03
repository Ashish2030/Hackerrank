#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 /* Bits required to represent an integer */

int main()
{
    int num, count, i;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    count = 0;

    /* Iterate over each bit of the number */
    for(i=0; i<INT_SIZE; i++)
    {
        /* If set bit is found the terminate from loop*/
        if((num >> i ) & 1)
        {
            /* Terminate from loop */
            break;
        }

        /* Increment trailing zeros count */
        count++;
    }

    printf("Total number of trailing zeros in %d is %d.", num, count);

    return 0;
}
/*
#include <stdio.h>

int main()
{
    int num, count=0;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    while(!(num & 1))
    {
        count++;
        num >>= 1;
    }

    printf("Total number of trailing zeros = %d.", count);

    return 0;
}
*/