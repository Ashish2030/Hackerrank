#include <stdio.h>

int main()
{
    int arr[100];
    int size,  Search, found=0,pass;
  
    scanf("%d", &size);

 
 
    for(int  i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

 
    scanf("%d", &Search);

   
  
    
    for(int i=0; i<size; i++)
    {
     
        
        if(arr[i] == Search)
        {
            found = 1;
           pass =i;
            break;
        }
    }

  
    if(found == 1)
    {
        printf("%d", pass+1);
    }
    else
    {
        printf("\n%d is not found in the array", Search);
    }

    return 0;
}