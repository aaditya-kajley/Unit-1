#include<stdio.h>
int main()
{
  float a, b;

   printf("enter 1st no.:");
   scanf("%f",&a);
   printf("enter 2nd no.:");
   scanf("%f",&b);

   if (a>b){
        printf("%f is greater than %f",a,b);
   }
   else if (b>a){
    printf("%f is greater than %f",b,a);
   }

    return 0;
}
