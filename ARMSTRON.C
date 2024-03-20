#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0,temp;
    clrscr();
    printf("Enter any value");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
      r=n%10;
      sum=sum+(r*r*r);
      n=n/10;
    }
    if(temp==sum)
    {
    printf("This is Armstrong num");
    }
    else
    {
    printf("This is not Armstrong num");
    }
    getch();
    }