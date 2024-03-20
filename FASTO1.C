#include<stdio.h>
#include<conio.h>
void heel()
{
  int i,f,n;
  f=i=1;
  printf("Enter the value");
  scanf("%d",&n);
  while(i<=n)
  {
     f=f*i;
     i++;
  }
  printf("The factorial of %d is : %d",n,f);
}
void main()
{
  clrscr();
  heel();
  getch();
}

