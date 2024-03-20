#include<stdio.h>
#include<conio.h>
void main()
{
  int a=10;
  int *p;
  clrscr();
  printf("value of a=%d\n",a);
  printf("address of a=%u\n",&a);
  p=&a;
  printf("value of p=%u\n",p);
  printf("fatch value=%u\n",*p);
  *p=a+10;
  printf("final=%d",a);
  getch();
}