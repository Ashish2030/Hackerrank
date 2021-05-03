#include <stdio.h>
int main()
{
    char str[]={"as"};
    char str1[]={"au"};
    int l=0,c=0;
     int flag=0;
     int m;
    for(int i=0;str[i]!='\0';i++)
    {
        l++;
    }
     for(int i=0;str1[i]!='\0';i++)
    {
        c++;
    }
    if(l!=c)
    {
        printf("not equal");
        
    }
    else
    {
        
        for(int i=0; str[i]!='\0';i++)
          {
             if(str[i]!=str1[i])
            {
                m=i;
                flag=1;
                break;
            }
         }
        
         {
            
         }
         if(flag==1&& str[m]>str1[m])
           {
        printf("Not equal str>str1");
           }
       else  if(flag==1&& str[m]<str1[m])
       {
        printf(" EQUAL str[m]<str1[m]");
       }
       else
       {
           printf("equal");
       }
    
    }
         
	return 0;
}