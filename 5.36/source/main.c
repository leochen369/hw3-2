#include<stdio.h>
#include<stdlib.h>
int h(int, int, int, int);
int main(void)
{
	int j;
	printf("�п�J�L�l�ƶq:");
	scanf_s("%d", &j);
	h(j, 1, 2, 3);
	return 0;
}
int h(int n, int p1, int p2, int p3)
{
	if (n == 1)
	{
		printf("�L�l�q%d��%d\n", p1, p3);

	}
	else
	{
		h(n - 1, p1, p3, p2);
		printf("�L�l�q%d����%d\n", p1, p3);
		h(n - 1, p2, p1, p3);
	}

}