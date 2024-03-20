#include<stdio.h>
#include<conio.h>
void main()
{
  int num[10],max=0,n,i;
  clrscr();
  printf("How many elements would you like to put");
  scanf("%d",&n);
  printf("Enter %d elements",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
    if(num[i]>max)
    {
      max=num[i];
    }
  }
   printf("Maximum=%d",max);
   getch();
}