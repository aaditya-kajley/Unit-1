#include<stdio.h>
int main()
{
int n;
char c;

printf("a. Even odd \n");
printf("b. Positive negetive\n");
printf("c. Square of a number\n");
printf("d. Squareroot of a number\n");

printf("Enter the choice: ");
scanf("%s",&c);

printf("\nEnter the number: ");
scanf("%d",&n);

int x;
    x = n*n;
int y;
    y = sqrt(n);
switch(c)
{
 case 'a':
     if (n%2==0)
     printf("\nNumber is even");
     else
     printf("\nNumber is odd");

 break;
 case 'b':
    if (n>0)
     printf("Number is positive");

    else
     printf("Number is negetive");

 break;
 case 'c':

    printf("Square of %d is %d",n,x);

 break;
 case 'd':

    printf("Square root of %d is %d",n,y);

 break;
 default:
 printf("Invalid choice");
}
return (0);
}
