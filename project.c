#include<stdio.h>
int main()
{
int a,b; //a and b are identifiers of work done by A and B
 printf("Enter the number of days A take to do piece of work:");
 scanf("%d",&a);

 printf("Enter the number of days B take to do piece of work:");
 scanf("%d",&b);

int x; //x is identifier of work done by A and B together
  x=(a*b)/(a+b);
 printf("Number of days A and B will take to do the same piece of work together:%d",x);

return 0;

}
