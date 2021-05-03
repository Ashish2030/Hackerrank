#include <stdio.h> 

int binarySearch(int arr[], int f, int l, int s) 
{ 
while (f<= l) 
{ 
	int m = (l + f)/2; 

	// Check if x is present at mid 
	if (arr[m] == s) 
		return m; 

	// If x greater, ignore left half 
	if (arr[m] < s) 
		f = m + 1; 

	// If x is smaller, ignore right half 
	else
		l = m - 1; 
} 


return -1; 
} 

int main(void) 
{ 
int arr[] = {2, 3, 4, 10, 40}; 
int n = sizeof(arr)/ sizeof(arr[0]); 
int l=n-1;
int f=0;
int s= 10; 
int result = binarySearch(arr, f, l, s); 
(result == -1)? printf("Element is not present in array") 
				: printf("Element is present at index %d", result); 
return 0; 
} 
