#include <stdio.h>

int main()
{
    int num, n, bitStatus;
    printf("Enter any number: ");
    scanf("%d", &num);
    scanf("%d", &n);
    bitStatus = (num >> n) & 1;
    printf("The %d bit is set to %d", n, bitStatus);
    return 0;
}