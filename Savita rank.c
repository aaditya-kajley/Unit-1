#include<stdio.h>
int main()
{
int x,m,r;
printf("Taking class size as 100 and girls ratio boys to be 2:3");

printf("\nEnter the rank of savita: ");
scanf("%d",&r);

printf("\nEnter the number of boys ahead of savita: ");
scanf("%d",&m);

x=40-r+m+1;
if (x<0)
 {
 printf("\nEntered number of boys ahead of savita is wrong");
 }
 else
 {if (x>40)
    {
        printf("\nEntered number of boys ahead of savita is wrong");
    }
    else
    {
        printf("\nNumber of girls behind savita: %d",x);
    }
 }

if(r<=0)
{
printf("\nEntered rank is incorrect");
}
else
{
if(r<10)
 {
 printf("\nSavita is in top 10");
 }
 if (r>100)
 {
     printf("\nEntered rand is incorrect");
 }
else
 {
 printf("\nSavita in not in top 10");
 }

}
return 0;
}
