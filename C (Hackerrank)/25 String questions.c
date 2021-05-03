String Questions :
1. Program to Accept a String and display
    Using Functions/Arrays and Pointers

2. Program to Accept a String and display in Reverse

3. Program to Accept a String and display its alternate characters

4. Program to Accept a String and display Alternate characters in either case

5. Program to Accept a String and display its substring(Accept parameters from
user)
             ex. substr(str,start_pos,no_of_chars)

6. Program to Accept a String and display its alternate characters in reverse

7. Program to Accept 2 strings and display the largest string

8. Program to Accept 2 strings and display combination of two strings

9. Program to Accept a String and display vowels

10. Program to Accept a String and display no of vowels

11. Program to Accept a String and display no of each Vowel

12. Program to Accept a String and a character and find out whether this character
is present in the string

13. Program to Accept a String and a Character and find out whether this character
is present in the string.
    If Present then display how many times this Character occurs

14. Accept 2 strings and check whether all Characters from 1st string are present
in 2nd String

15. Accept 2 strings and display how many times each character from 1st string
occurs in 2nd string

16. Accept 2 strings and display the largset string

17. Accept 2 strings and extract substring from both the strings(Accept arguments
from user)
    Create 3rd string which will be substring1+substring2

18. Accept String from user and copy it to another string(strcpy)

19. Accept 2 strings and create third string which will be concatenation of 2
strings
              ex : string3 = string1 + string2

20. Accept Multiple strings from user and display

21. Accept Multiple strings from user and display odd positioned strings

22. Accept Multiple strings and display even positioned strings in reverse

23. Accept Multiple strings and display alternate strings in reverse
24. Accept Multiple strings and display alternate characters of alternate strings
in either case

25. Accept Multiple strings and display combination of every two strings
*------------------------*----------------------------*-----------------------
*------------------------------*--------------------

>>>>>>1)       /*program to accept a string & display*/

#include<stdio.h>
#include<conio.h>
char string(char str2[10]);
void main()
{
    int i;
    char str1[10];
    clrscr();
    printf("\n\nEnter the string\t");
    for(i=0;i<=9;i++)
    {
      scanf("%c",&str1[i]);
    }
    string(str1);
    getch();
}
char string(char str2[10])
{
    int j;
    printf("\n\nThe string is\t");
    for(j=0;j<=9;j++)
    {
      printf("%c",str2[j]);
    }
    return 1;
}

________________________________________________________

>>>>>>>>2)
 /*   Program to accept a string and display in reverse
      using functions/arrays and pointers     */


#include<stdio.h>
#include<conio.h>
#include<string.h>
char reverse(char *p);
void main()
{
    int i;
    char str[10];
    clrscr();
    printf("\n\nEnter the String\t");
    gets(str);
    reverse(str);
    getch();
}
char reverse(char *p)
{
    int j,l;
    l=strlen(p);
    printf("\n\nString in reverse is \t");
    for(j=l-1;j>=0;j--)
    {
       printf("%c",p[j]);
    }
    return 1;
}

_________________________________________________________

>>>>>>>3)
   /* Program to accept a string and display its alternate characters */

   #include<stdio.h>
   #include<conio.h>
   #include<string.h>
   char alt(char *p);
   void main()
   {
       char str[10];
       clrscr();
       printf("\n\nEnter the string\t");
       gets(str);
       alt(str);
       getch();
   }
   char alt(char *p)
   {
       int j,l;
       l=strlen(p);
       printf("\n\nAlternate characters of the entered string are\t");
       for(j=0;j<=l-1;j=j+2)
       {
         printf("%c",p[j]);
       }
       return 1;
   }

______________________________________________________________

>>>>>>4)
/*Program to accept a string and display alternate characters in either case*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
char altcase(char *p);
void main()
{
    char str[20];
    clrscr();
    printf("\n\nEnter the string\t");
    gets(str);
    altcase(str);
    getch();
}
char altcase(char *p)
{
    printf("\n\nAlternate characters of string are\t");
    while(*p)
    {
      if(*p>='A' && *p<='Z')
      {
          *p=*p+32;
      }
      else if(*p>='a' && *p<='z')
      {
          *p=*p-32;
      }
    printf("%c",*p);
    p+=2;
    }
    return 1;
}

_________________________________________________________________

>>>>>5)
      /*Program to accept a string and display its substring*/

     #include<stdio.h>
     #include<conio.h>
     char substr(char *p,int s,int n);
     void main()
     {
       char str[10];
       int start,no_of_chars;
       clrscr();
       printf("\n\nEnter the string\t");
       gets(str);
       printf("\n\nEnter start position for substring\t");
       fflush(stdin);
       scanf("%d",&start);
       printf("\n\nEnter number of characters\t");
       fflush(stdin);
       scanf("%d",&no_of_chars);
       substr(str,start,no_of_chars);
       getch();
     }
     char substr(char *p,int s,int n)
     {
       int i;
       printf("\n\nThe substring is\t");
       for(i=s-1;i<n;i++)
       {
           printf("%c",p[i]);
       }
       return 1;
     }

_________________________________________________________________
>>>>>>6)
/*Program to accept a string and display its alternate characters in reverse*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
char realt(char *p);
void main()
{
    char str[10];
    clrscr();
    printf("\n\nEnter the string\t");
    gets(str);
    realt(str);
    getch();
}
char realt(char *p)
{
    int i,l;
    l=strlen(p);
    printf("\n\nAlternate characters in reverse\t");
    for(i=l-1;i>=0;i-=2)
    {
      printf("%c",p[i]);
    }
    return 1;
}

______________________________________________________________________

>>>>>>7)
      /*Program to accept two strings and display the largest string*/

   #include<stdio.h>
   #include<conio.h>
   #include<string.h>
   void largstr(char *p1,char *p2);
   void main()
   {
       char str1[10];
       char str2[10];
       clrscr();
       printf("\n\nEnter first string\t");
       fflush(stdin);
       gets(str1);
       printf("\n\nEnter second string\t");
       fflush(stdin);
       gets(str2);
       largstr(str1,str2);
   }
   void largstr(char *p1,char *p2)
   {
       int l1,l2,i;
       l1=strlen(p1);
       l2=strlen(p2);
       printf("\n\nThe largest string is\t");
       if(l1>l2)
       {
        for(i=0;i<l1;i++)
        {
            printf("%c",p1[i]);
        }
       }
       else
       {
          for(i=0;i<l2;i++)
          {
             printf("%c",p2[i]);
          }
       }
       getch();
}

___________________________________________________________________________

>>>>>>8)
   /*Program to accept two strings and display combination of two strings*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void comb(char *p1,char *p2);
void main()
{
    char str1[10];
    char str2[10];
    clrscr();
    printf("\n\nEnter first string\t");
    fflush(stdin);
    gets(str1);
    printf("\n\nEnter second string\t");
    fflush(stdin);
    gets(str2);
    comb(str1,str2);
}
void comb(char *p1,char *p2)
{
    int i,l1,l2;
    l1=strlen(p1);
    l2=strlen(p2);
    printf("\n\nThe first string is\t");
    for(i=0;i<l1;i++)
    {
      printf("%c",p1[i]);
    }
    printf("\n\nThe second string is\t");
    for(i=0;i<l2;i++)
    {
      printf("%c",p2[i]);
    }
    getch();
}

______________________________________________________________________________

>>>>>>9)
       /* Program to accept a string and display vowels */

#include<stdio.h>
#include<conio.h>
#include<string.h>
char vowels(char *p);
void main()
{
   char str[10];
   clrscr();
   printf("\n\nEnter the string\t");
   gets(str);
   vowels(str);
   getch();
}
char vowels(char *p)
{
   int i,l;
   l=strlen(p);
   printf("\n\nThe vowels in the string are\t");
   for(i=0;i<l;i++)
   {
       if(p[i]=='a' || p[i]== 'e' || p[i]=='i' || p[i]=='o' || p[i]=='u'||
p[i]=='A' || p[i]=='E' || p[i]=='I' || p[i]=='O' || p[i]=='U')
       {
        printf("%c",p[i]);
       }
       else
       continue;
   }
   return 1;
}

__________________________________________________________________________________
_

>>>>>>10)

      /* Program to accept a string and display number of vowels */

#include<stdio.h>
#include<conio.h>
#include<string.h>
char vowels(char *p);
void main()
{
   char str[10];
   clrscr();
   printf("\n\nEnter the string\t");
   gets(str);
   vowels(str);
   getch();
}
char vowels(char *p)
{
   int i,l,v=0;
   l=strlen(p);
   printf("\n\nThe number of vowels in the string is\t");
   for(i=0;i<l;i++)
   {
       if(p[i]=='a' || p[i]== 'e' || p[i]=='i' || p[i]=='o' || p[i]=='u'||
p[i]=='A' || p[i]=='E' || p[i]=='I' || p[i]=='O' || p[i]=='U')
       {
        v++;
       }
       else
       continue;
   }
   printf("%d",v);
   return 1;
}

__________________________________________________________________________________
___


>>>>>>11)

     /* Program to accept a string and display number of each vowels */

#include<stdio.h>
#include<conio.h>
#include<string.h>
char vowels(char *p);
void main()
{
   char str[10];
   clrscr();
   printf("\n\nEnter the string\t");
   gets(str);
   vowels(str);
   getch();
}
char vowels(char *p)
{
   int i,l,v1=0,v2=0,v3=0,v4=0,v5=0,v6=0,v7=0,v8=0,v9=0,v10=0;
   l=strlen(p);
   printf("\n\nThe number of vowels in the string is\t");
   for(i=0;i<l;i++)
   {
       if(p[i]=='a')
       {
        v1++;
       }

       if(p[i]=='e')
       {
        v2++;
       }

       if(p[i]=='i')
       {
        v3++;
       }

       if(p[i]=='o')
       {
        v4++;
       }
       if(p[i]=='u')
       {
        v5++;
       }
       if(p[i]=='A')
       {
        v6++;
       }
       if(p[i]=='E')
       {
        v7++;
       }
       if(p[i]=='I')
       {
        v8++;
       }
       if(p[i]=='O')
       {
        v9++;
       }
       if(p[i]=='U')
       {
        v10++;
       }
       else
       continue;
   }
   printf("a=%d e=%d i=%d o=%d u=%d A=%d E=%d I=%d O=%d
U=%d",v1,v2,v3,v4,v5,v6,v7,v8,v9,v10);
   return 1;
}

__________________________________________________________________________________
____


>>>>>>12)
      /*   Program to accept a string and find out whether
         this character is present in the string           */

#include<stdio.h>
#include<conio.h>
#include<string.h>
void s(char *p,char hc);
void main()
{
  char str[10];
  char ch;
  clrscr();
  printf("\n\nEnter the string\t");
  gets(str);
  printf("\n\nEnter the character\t");
  scanf("%c",&ch);
  s(str,ch);
}
void s(char *p,char hc)
{
  int a;
  int i,l;
  l=strlen(p);
  for(i=0;i<l;i++)
  {
     if(p[i]==hc)
     {
      a++;
     }
     else
     continue;
  }
  if(a>=1)
  {
       printf("\n\nYes , the entered character is present in the string");
  }
  else
  {
       printf("\n\nNo , the entered character is not present in the string");
  }
  getch();
}

__________________________________________________________________________________
____

>>>>>>13)
    /*    Program to accept a string and find out whether
         this character is present in the string
             if present then display how many
              times this character occurs                */

#include<stdio.h>
#include<conio.h>
#include<string.h>
void s(char *p,char   hc);
void main()
{
  char str[10];
  char ch;
  clrscr();
  printf("\n\nEnter   the string\t");
  gets(str);
  printf("\n\nEnter   the character\t");
  scanf("%c",&ch);
  s(str,ch);
}
void s(char *p,char   hc)
{
  int a=0;
  int i,l;
  l=strlen(p);
  for(i=0;i<l;i++)
  {
     if(p[i]==hc)
     {
        a++;
       }
       else
       continue;
    }
    printf("\n\nThe Entered Character occurs %d times",a);
    getch();
}

__________________________________________________________________________________
____

>>>>>>14)
     /* Accept two strings and check whether all characters from
            first string are present in second string            */

 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 int charprs(char *p1,char *p2);
 void main()
 {
     char str1[10];
     char str2[20];
     clrscr();
     printf("\n\nEnter first string\t");
     fflush(stdin);
     gets(str1);
     printf("\n\nEnter second string\t");
     fflush(stdin);
     gets(str2);
     charprs(str1,str2);
     getch();
 }
 int charprs(char *p1,char *p2)
 {
     int i,j,l1,l2,a=0;
     l1=strlen(p1);
     l2=strlen(p2);
     printf("\n\nThe first string is\t");
     for(i=0;i<l1;i++)
     {
       printf("%c",p1[i]);
     }
     printf("\n\nThe second string is\t");
     for(j=0;j<l2;j++)
     {
       printf("%c",p2[j]);
     }
     for(i=0;i<l1;i++)
     {
       for(j=0;j<l2;j++)
       {
           if(p1[i]==p2[j])
           {
            a++;
           }
           else
            continue;
      }
     }
     if(l1>l2)
     {
        if(a>=l2)
        {
             printf("\n\nYes, all characters of any one of both the strings are
present in the other string");
        }
        else
        {
             printf("\n\nNo, all characters of any one of both the strings are not
present in the other string");
        }
     }
     if(l2>l1)
     {
        if(a>=l1)
        {
             printf("\n\nYes, all characters of any one of both the strings are
present in the other string");
        }
        else
        {
             printf("\n\nNo, all characters of any one of both the strings are not
present in the other string");
        }
     }
     return 1;
 }

__________________________________________________________________________________
____

>>>>>>15)
       /*   Accept two strings and check whether all characters from
              first string are present in second string            */

 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 void charprs(char *p1,char *p2);
 void main()
 {
     char str1[10];
     char str2[20];
     clrscr();
     printf("\n\nEnter first string\t");
     fflush(stdin);
     gets(str1);
     printf("\n\nEnter second string\t");
     fflush(stdin);
     gets(str2);
     charprs(str1,str2);
 }
 void charprs(char *p1,char *p2)
 {
     int i,j,l1,l2,a,b=0;
     l1=strlen(p1);
     l2=strlen(p2);
     printf("\n\nThe first string is\t");
     for(i=0;i<l1;i++)
     {
       printf("%c",p1[i]);
     }
     printf("\n\nThe second string is\t");
     for(j=0;j<l2;j++)
     {
       printf("%c",p2[j]);
     }
     for(i=0;i<l1;i++)
     {
       a=0;
       b++;
       for(j=0;j<l2;j++)
       {
            if(p1[i]==p2[j])
            {
              a++;
            }
            else
            continue;
       }
       printf("\n\n%d character is %d times",b,a);
     }
     getch();
}

__________________________________________________________________________________
____

>>>>>>16)
      /* Program to accept two strings and display the largest string */

 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 void largstr(char *p1,char *p2);
 void main()
 {
    char str1[10];
    char str2[20];
    clrscr();
    printf("\n\nEnter First string\t");
    fflush(stdin);
    gets(str1);
    printf("\n\nEnter Second string\t");
    fflush(stdin);
    gets(str2);
    largstr(str1,str2);
 }
 void largstr(char *p1,char *p2)
 {
    int i=0,j=0,l1=0,l2=0;
    while(p1[i]!='\0')
    {
        i++;
        l1++;
    }
    printf("\n\nThe string length of   first string is %d",l1);
    while(p2[j]!='\0')
    {
        j++;
        l2++;
    }
    printf("\n\nThe string length of   second string is %d",l2);
    if(l1>l2)
    {
      printf("\n\nThe largest string   is\t");
      for(i=0;i<l1;i++)
      {
          printf("%c",p1[i]);
      }
    }
    else if(l2>l1)
    {
      printf("\n\nThe largest string   is\t");
      for(j=0;j<l2;j++)
      {
          printf("%c",p2[j]);
      }
    }
    getch();
 }
__________________________________________________________________________________
____

>>>>>>17)
/*Program to accept two strings and extract substring from both the strings.
        Create third string which will be substring1+substring2           */

  #include<stdio.h>
  #include<conio.h>
  void substr(char *p1,char *p2,char *p3,int s1,int no1,int s2,int no2);
  void main()
  {
     char str1[10];
     char str2[12];
     char str3[25];
     int start1,start2,no_of_chars1,no_of_chars2;
     clrscr();
     printf("\n\nEnter first string\t");
     fflush(stdin);
     gets(str1);
     printf("\n\nEnter second string\t");
     fflush(stdin);
     gets(str2);
     printf("\n\nEnter start position for first string\t");
     fflush(stdin);
     scanf("%d",&start1);
     printf("\n\nEnter number of characters for first string\t");
     fflush(stdin);
     scanf("%d",&no_of_chars1);
     printf("\n\nEnter start position for second string\t");
     fflush(stdin);
     scanf("%d",&start2);
     printf("\n\nEnter number of characters for second string\t");
     fflush(stdin);
     scanf("%d",&no_of_chars2);
     substr(str1,str2,str3,start1,no_of_chars1,start2,no_of_chars2);
 }
 void substr(char *p1,char *p2,char *p3,int s1,int no1,int s2,int no2)
 {
      int i,j,k,l;
      printf("\n\nThe first substring is\t");
      for(i=s1;i<s1+no1;i++)
      {
        printf("%c",p1[i]);
      }
      printf("\n\nThe second substring is\t");
      for(j=s2;j<s2+no2;j++)
      {
        printf("%c",p2[j]);
      }
      printf("\n\nThe third string is\t");
      for(i=s1,k=0;i<s1+no1;i++,k++)
      {
        p3[k]=p1[i];
        printf("%c",p3[k]);
      }
      printf("\t");
      for(j=s2,l=0;j<s2+no2;j++,l++)
      {
        p3[l]=p2[j];
        printf("%c",p3[l]);
      }
      getch();
 }


__________________________________________________________________________________
____

>>>>>>18)
    /*Program to accept s string from user and copy it to another string*/

  #include<stdio.h>
  #include<conio.h>
  #include<string.h>
  void substr(char *p1,char *p2);
  void main()
  {
     char str1[10];
     char str2[10];
     clrscr();
     printf("\n\nEnter first string\t");
     fflush(stdin);
     gets(str1);
     substr(str1,str2);
 }
 void substr(char *p1,char *p2)
 {
         int i,j,l1;
         l1=strlen(p1);
         printf("\n\nThe first string is\t");
         for(i=0;i<l1;i++)
         {
           printf("%c",p1[i]);
         }
         printf("\n\nThe second string 'copy of first string' is\t");
         for(i=0,j=0;i<l1;i++,j++)
         {
           p2[j]=p1[i];
           printf("%c",p2[j]);
         }
         getch();
 }

__________________________________________________________________________________
____

>>>>>>19)
  /* Program to accept two strings and create third string which will be
               concatenation of two strings                           */

     #include<stdio.h>
     #include<conio.h>
     #include<string.h>
     void substr(char *p1,char *p2,char *p3);
     void main()
     {
        char str1[10];
        char str2[12];
        char str3[25];
        clrscr();
        printf("\n\nEnter first string\t");
        fflush(stdin);
        gets(str1);
        printf("\n\nEnter second string\t");
        fflush(stdin);
        gets(str2);
        substr(str1,str2,str3);
 }
 void substr(char *p1,char *p2,char *p3)
 {
      int i,j,l1,l2,k;
      l1=strlen(p1);
      l2=strlen(p2);
      printf("\n\nThe first string is\t");
      for(i=0;i<l1;i++)
      {
        printf("%c",p1[i]);
      }
      printf("\n\nThe second string is\t");
      for(j=0;j<l2;j++)
      {
        printf("%c",p2[j]);
      }
      printf("\n\nThe third string is\t");
      for(i=0,k=0;i<l1;i++,k++)
      {
        p3[k]=p1[i];
        printf("%c",p3[k]);
      }
      printf("\t");
      for(j=0,k=0;j<l2;j++,k++)
      {
        p3[k]=p2[j];
        printf("%c",p3[k]);
      }
      getch();
 }
__________________________________________________________________________________
____

>>>>>>20)
       /* Program to accept multiple strings from user and display */


  #include<stdio.h>
  #include<conio.h>
  #include<string.h>
  char multstr(char *p1);
  void main()
  {
     char name[10];
     int i;
     clrscr();
     for(i=0;i<5;i++)
     {
        printf("\n\nEnter %d string\t",i+1);
        gets(name);
        multstr(name);
        getch();
     }
  }
  char multstr(char *p1)
  {
       printf("\n\nString is %s",p1);
       return 0;
  }

__________________________________________________________________________________
____

>>>>>>21)
      /* Program to accept multiple strings from user and
            display odd positioned strings               */


  #include<stdio.h>
  #include<conio.h>
  void oddstr(char *p);
  struct name
  {
      char nm[10];
  };
  void main()
  {
     char name[10];
     int i,j=0,k;
     struct name n[5];
     clrscr();
     for(i=0;i<5;i++)
     {
        j++;
        printf("\n\nEnter %d string\t",j);
        gets(n[i].nm);
     }
     for(k=0;k<5;k+=2)
     {
      oddstr(n[k].nm);
     }
  }
  void oddstr(char *p)
  {
       printf("\n\n\nThe string is %s",p);
       getch();
  }

__________________________________________________________________________________
____

>>>>>>22)
       /*    Program to accept multiple strings and
         display even positioned strings in reverse   */

  #include<stdio.h>
  #include<conio.h>
  void evnrevstr(char *p);
  struct name
  {
       char nm[10];
  };
  void main()
  {
     char name[10];
     int i,j=0,k;
     struct name n[5];
     clrscr();
     for(i=0;i<5;i++)
     {
        j++;
        printf("\n\nEnter %d string\t",j);
        gets(n[i].nm);
     }
     for(k=3;k>=0;k-=2)
     {
      evnrevstr(n[k].nm);
     }
  }
  void evnrevstr(char *p)
  {
       printf("\n\n\nThe string is %s",p);
       getch();
  }
__________________________________________________________________________________
____

>>>>>>23)
      /*    Program to accept multiple strings and
         display even positioned strings in reverse   */

  #include<stdio.h>
  #include<conio.h>
  void altrevstr(char *p);
  struct name
  {
       char nm[10];
  };
  void main()
  {
     char name[10];
     int i,j=0,k;
     struct name n[5];
     clrscr();
     for(i=0;i<5;i++)
     {
        j++;
        printf("\n\nEnter %d string\t",j);
        gets(n[i].nm);
     }
     for(k=4;k>=0;k-=2)
     {
      altrevstr(n[k].nm);
     }
  }
  void altrevstr(char *p)
  {
       printf("\n\n\nThe string is %s",p);
       getch();
  }
__________________________________________________________________________________
____

>>>>>>24)
      /*    Program to accept multiple strings and display alternate
             characters of alternate strings in either case        */

  #include<stdio.h>
  #include<conio.h>
  #include<string.h>
  void altcharstr(char *p);
  struct name
  {
      char nm[10];
  };
  void main()
  {
     char name[10];
     int i,j=0,k;
     struct name n[5];
     clrscr();
     for(i=0;i<5;i++)
     {
       j++;
       printf("\n\nEnter %d string\t",j);
       gets(n[i].nm);
     }
     for(k=0;k<5;k+=2)
     {
      altcharstr(n[k].nm);
     }
  }
  void altcharstr(char *p)
  {
      int j,l;
      l=strlen(p);
      printf("\n\nEnter the string\t");
      for(j=0;j<l;j++)
      {
         if(p[j]>='A' && p[j]<='Z')
         {
             p[j]=p[j]+32;
             printf("%c",p[j]);
         }
         else if(p[j]>='a' && p[j]<='z')
         {
             p[j]=p[j]-32;
             printf("%c",p[j]);
         }
        getch();
        }
  }
__________________________________________________________________________________
____

>>>>>>>25)
      /*      Program to accept multiple strings and
             display combination of every two strings   */

  #include<stdio.h>
  #include<conio.h>
  #include<string.h>
  void altrevstr(char *p);
  struct name
  {
       char nm[10];
  };
  void main()
  {
     char name[10];
     int i,j=0,k,m=0;
     struct name n[6];
     clrscr();
     for(i=0;i<6;i++)
     {
        j++;
        printf("\n\nEnter %d string\t",j);
        gets(n[i].nm);
     }
     for(k=0;k<6;k++)
     {
      printf("\n\n\n");
      altrevstr(n[k].nm);
      for(m=0;m<6;m++)
      {

          if(m!=k)
          {
             altrevstr(n[m].nm);
          }
          else
          continue;
      }
     }
  }
  void altrevstr(char *p)
  {
      {
        printf("\n\n\nThe string is %s",p);
        getch();
      }
  }

*_________________________*______________________________*
