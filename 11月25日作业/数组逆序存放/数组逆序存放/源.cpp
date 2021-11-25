#include<stdio.h>
int main()
{
	int a[10] = { 8,6,5,3,1 };
	int b[10];
	int i, j;
	for (i = 0; i <= 4; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n\n");
	for (i = 0; i <= 4; i++)
	{
		b[i] = a[4 - i];
	}
	for (i = 0; i <= 4; i++)
	{
		a[i] = b[i];
	}
	for (i = 0; i <= 4; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}