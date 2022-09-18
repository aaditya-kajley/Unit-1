#include<stdio.h>
int main()
{
int b,m,n,r;
 printf("Enter the values of b,m,n,r:");
 scanf("%d%d%d%d",&b,&m,&n,&r);

int x; //x is identifier of year of birth
 x=b+m-n;
 printf("Mr. Kavi was born in year:%d",x);

int c; //'c' is identifier of class

if(r>=1)
  {
  if(r>=12)
   {
   printf("\nMr. Kavi is in college");
   }
  else
    c=r+n-m;
    {
    printf("\nMr. Kavi is in class:%d",c);
    }

  }
else
    printf("\nMr. Kavi is in nursery");
    return 0;
}
