#include<stdio.h>
int main()
{
int x,r,y,m,n,c;
 printf("Enter the value of r,y,m,n: ");
 scanf("%d%d%d%d",&r,&y,&m,&n);

x=y-n+m;
 printf("\nMr. Kavi's year of birth is: %d",x);

c=r+n-m;
if(c>=1)
 {
  if(c>12)
   {
   printf("\nMr.Kavi is in college");
   }
   else
   {
   printf("\nMr.Kavi is in %d class.",c);
   }
 }
else
 {
 printf("\nMr.Kavi is in kindergarten.");
 }
return 0;
}
