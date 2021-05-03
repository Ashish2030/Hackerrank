#include<stdio.h>
int search(char[], char[]);
 int main() {
   int loc,count=0,z,i;
    char source[] = "i am not a terrorist";
   char target[] = "terrorist";
   for( z=0;target[z]!='\0';z++);
    loc = search(source, target);
    if (loc == -1)
      printf("\nNot found");
   else
   {
       while(count<z)
       {
      for(i=loc;source[i]!='\0';i++)
          {
        source[i]=source[i+1];
         }
      count++;
       }
   }
   printf("%s",source);
 
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