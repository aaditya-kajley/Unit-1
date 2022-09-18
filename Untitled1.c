#include<stdio.h>
#include<string.h>
int main()
{
int m,n;
printf("Enter the month and date:");
scanf("%d%d",&m,&n);
if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
  {
      if(n%7==1)

          printf("wednesday");

      if(n%7==2)

          printf("thursday");

      if(n%7==3)

          printf("friday");

      if(n%7==4)

          printf("saturday");

      if(n%7==5)

          printf("sunday");

      if(n%7==6)

          printf("monday");

      if(n%7==7)

          printf("tuesday");

  }
if(m==4||m==6||m==9||m==11)
  {
      if(n%7==2)

          printf("friday");

      if(n%7==3)

          printf("saturday");

      if(n%7==4)

          printf("sunday");

      if(n%7==5)

          printf("monday");

      if(n%7==6)

          printf("tuesday");

      if(n%7==0)

          printf("wednesday");

      if(n%7==1)

          printf("thursday");

  }
if (m==2)
     {if(n%7==0)

          printf("friday");

      if(n%7==1)

          printf("saturday");

      if(n%7==2)

          printf("sunday");

      if(n%7==3)

          printf("monday");

      if(n%7==4)

          printf("tuesday");

      if(n%7==5)

          printf("wednesday");

      if(n%7==6)

          printf("thursday");

     }
return 0;
}
