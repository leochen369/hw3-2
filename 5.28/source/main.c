#include<stdio.h>
#include<stdlib.h>
char n(int b);
int main(void)
{
	char a;
	printf("請輸入一個字母:");
	scanf_s("%c", &a);
	printf("%c", n(a));
    system("pause");
	return 0;
}
char n(int b)
{
	if ((b >= 65) && (b <= 90))
	{
		b = b + 32;
	}
	else
	{
		b = b - 32;
	}
}