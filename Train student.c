#include<stdio.h>
int main()
{
int n,m;
printf("Enter number of students in train: ");
scanf("%d",&n);

printf("\nEnter the number of students pulling chain: ");
scanf("%d",&m);

int p;
p=((m*100)/n);

if(p>=80)
{
    printf("strict action is required to restrict this event ");
}
else if(p<=80 && p>=50)
{
    printf("guidelines should be issued");
}
else if(p<=50 && p>=10)
      {
       printf("request to restrict the event");
      }
else
   {
       printf(" No action required ");
   }

return 0;

}
