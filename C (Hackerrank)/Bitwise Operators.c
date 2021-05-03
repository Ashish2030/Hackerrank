#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
     int maximum_and = 0, maximum_or = 0, maximum_xor = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
        int x = i&j, y = i|j, z = i^j;

        if (x < k && x > maximum_and) {
            maximum_and = x;
        }
        if (y < k && y > maximum_or) {
            maximum_or = y;
        }
        if (z < k && z > maximum_xor) {
            maximum_xor = z;
        }
    }
}

printf("%d\n%d\n%d\n", maximum_and, maximum_or, maximum_xor);
}


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
 
    return 0;
}
