#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],i,j,sum,r,c;
 clrscr();
 printf("Enter Number of Rows");
 scanf("%d%d",&i,&j);
 printf("Enter the value\t");
 for(r=0;r<i;r++)
 {
   for(c=0;c<j;c++)
   {
     scanf("%d",&a[r][c]);
   }
 }
 for(r=0;r<i;r++)
 {
  sum=0;
  for(c=0;c<j;c++)
  {
   sum = sum + a[r][c];
  }
  printf("The Sum of Number is = %d\n",sum);
 }
 getch();
}

