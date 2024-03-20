#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter the first value:");
  scanf("%d",&a);
  printf("Enter the second value:");
  scanf("%d",&b);
  printf("Enter the third value:");
  scanf("%d",&c);
  a+b+c==180? printf("Triangle is valid"):printf("Triangle is not valid");
  getch();
}