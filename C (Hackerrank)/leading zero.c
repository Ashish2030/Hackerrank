#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
    int num, count, msb, i;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    // Equivalent to
    // 10000000 00000000 00000000 00000000
    msb = 1 << (INT_SIZE - 1);

    count = 0;

    /* Iterate over each bit */
    for(i=0; i<INT_SIZE; i++)
    {
        /* If leading set bit is found */
        if((num << i) & msb)
        {
            /* Terminate the loop */
            break;
        }

        count++;
    }

    printf("Total number of leading zeros in %d is %d", num, count);

    return 0;
}