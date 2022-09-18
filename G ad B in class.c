#include<stdio.h>
int main()
{
int n,b,g,p,q,diff;
printf("Enter the number of students of class: ");
scanf("%d",&n);

printf("\nEnter the value of p and q: ");
scanf("%d%d",&p,&q);

b=(n*p)/(p+q);
g=n-b;
printf("\nNumber of boys and girls in class is %d and %d",b,g);

float bp,gp;
bp=(b*100/n);
gp=(100-bp);

printf("\nPercentage of boys in class: %.2f",bp);
printf("\nPercentage of girls in class: %.2f",gp);
diff=b-g;
if (bp>=70)
 {
  printf("\nGender partiality in education.");
 }
else if (gp>=70)
  {
   printf("\nGirls are dominating in education.");
  }
else if(diff>=-5&&diff<5)
   {
    printf("\nEqual opportunities of education for both.");
   }
else
 {
  printf("\nNo conclusion drawn.");
 }
return 0;
}







