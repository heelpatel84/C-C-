#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i,j,sum=0;
  clrscr();
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    j=sum/5;
  }
  printf("Average=%d",j);
  getch();
}
