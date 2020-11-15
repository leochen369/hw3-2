#include<stdio.h>
#include<stdlib.h>
int f(int a);
int main(void)
{
	int b ;
	printf("enter a number");
	scanf_s("%d",&b);
	f(b);
	
	
}
int f(int a)
{
	int n1=0, n2=1, n3;
	printf("0 1 ");
	for (int i = 0; i < a - 2; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf("%d ", n3);
	}
	system("pause");
	return 0;
}