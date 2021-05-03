
#include<stdio.h>
#include<string.h>
 
int search(char[], char[]);
 
int main() {
   int loc;
 
   char source[20];
   char target[20] ;
   scanf("%s",source);
   scanf("%s",target);

   
   loc = search(source, target);
 
   if (loc == -1)
      printf("\nNot found");
   else
      printf("\nFound at location %d", loc + 1);
 
   return (0);
}
 
int search(char src[], char str[]) 
{
   int i, j, firstOcc;
   i = 0, j = 0;
 
   while (src[i] != '\0')
   {
 
      while (src[i] != str[0] && src[i] != '\0')
      {
         i++;
 
      if (src[i] == '\0')
      {
         return (-1);
      }
 
      firstOcc = i;
      }
      while (src[i] == str[j] && src[i] != '\0' && str[j] != '\0')
      {
         i++;
         j++;
      }
 
      if (str[j] == '\0')
         return (firstOcc);
      if (src[i] == '\0')
         return (-1);
 
      i = firstOcc + 1;
      j = 0;
   }
}