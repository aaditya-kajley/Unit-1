#include<stdio.h>
#include<string.h>
int main()
{
int m,n;
printf("Enter the month: ");
scanf("%d",&m);

printf("Enter the day you want to find: ");
scanf("%d",&n);

if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
  {
      if(n%7==1)

          printf("The day is wednesday");

      if(n%7==2)

          printf("The day is thursday");

      if(n%7==3)

          printf("The day is friday");

      if(n%7==4)

          printf("The day is saturday");

      if(n%7==5)

          printf("The day is sunday");

      if(n%7==6)

          printf("The day is monday");

      if(n%7==7)

          printf("The day is tuesday");

  }
if(m==4||m==6||m==9||m==11)
  {
      if(n%7==2)

          printf("The day is friday");

      if(n%7==3)

          printf("The day is saturday");

      if(n%7==4)

          printf("The day is sunday");

      if(n%7==5)

          printf("The day is monday");

      if(n%7==6)

          printf("The day is tuesday");

      if(n%7==0)

          printf("The day is wednesday");

      if(n%7==1)

          printf("The day is thursday");

  }
if (m==2)
     {if(n%7==0)

          printf("The day is friday");

      if(n%7==1)

          printf("The day is saturday");

      if(n%7==2)

          printf("The day is sunday");

      if(n%7==3)

          printf("The day is monday");

      if(n%7==4)

          printf("The day is tuesday");

      if(n%7==5)

          printf("The day is wednesday");

      if(n%7==6)

          printf("The day is thursday");

     }
return 0;
}
