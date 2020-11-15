#include<stdio.h>
#include<stdlib.h>
int recursive(int a,int b);
int main(void)
{
	int c, d;
	printf("enter two number");
	scanf_s("%d%d",&c,&d);
	printf("(%d,%d)=%d",c,d,recursive(c,d));
	system("pause");

}
int recursive(int a,int b)
{ 
	int n,k;
	k = a * 1;
	if (b == 0)
	{
		return 1;
	}
	else
	{

    for (n = 1; n < b; n++)
		  {
			a = k * a;
		  }
	}
	
	return a;

}