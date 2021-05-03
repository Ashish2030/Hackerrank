#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum = 0;
    do {
        sum += (n % 10);
        n /= 10;
    }
    while(n != 0);
    printf("%d", sum);
    return 0;
}
