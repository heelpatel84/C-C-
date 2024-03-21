#include<stdio.h>
#include<conio.h>
void main()
{
  int i,f,n,sum=0,r,temp;
  clrscr();

  printf("Enter the value");
  scanf("%d",&n);//123
  temp=n;
  while(n>0)
  {
	r=n%10;
	f=i=1;
	while(i<=r)
	{
		f=f*i;
		i++;
	}
  sum=sum+f;
  n=n/10;

  }
  if(sum==temp)
  {
    printf("The given num is strong num");
  }
  else
  {
    printf("The given num is not strong");
  }

  getch();
}

