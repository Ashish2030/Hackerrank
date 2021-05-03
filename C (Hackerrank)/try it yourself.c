#include<stdio.h> // include stdio.h
 
int main()
{    
    long int num;
    int sum = 0, rem;
    
    printf("Enter a number: ");
    scanf("%ld", &num);   
   
        
    while(num / 10 != 0)
    {
        sum = 0;
        while(num != 0) 
        {
            rem = num % 10;  // get the last digit of num
            sum += rem;      // add rem to sum
            num = num / 10;  // remove the last digit from num
        }
        
        num = sum;
    }
    
    printf("%d", sum);
        
    return 0;
}