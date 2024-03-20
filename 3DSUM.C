#include<stdio.h>
#include<conio.h>
void main()
{
  int a[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}},s,r,c,sum=0;
  clrscr();
  for(s=0;s<2;s++)
  {
   for(r=0;r<2;r++)
   {
    for(c=0;c<2;c++)
    {
      printf("%d",a[s][r][c]);
      sum=sum+a[s][r][c];
    }
    printf("\n");
   }
   printf("\n");
  }
  printf("Sum=%d",sum);
  getch();
}