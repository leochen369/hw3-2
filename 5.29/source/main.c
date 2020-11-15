#include<stdio.h>
#include<stdlib.h>
int lcm(int c,int d);
int main(void)
{
	int a,b;
	printf("Enter two numbers\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d",lcm(a,b));
	system("pause");
}
int lcm(int c,int d)
{
	int i, j;
	if (c > d)
	{
		if (c%d == 0)
		{
			return c;
		}
		else
		{
			return c * d;
		}
	}
	else
	{
		if (d%c == 0)
		{
			return d;
		}
		else
		{
			return c * d;
		}
	}
}