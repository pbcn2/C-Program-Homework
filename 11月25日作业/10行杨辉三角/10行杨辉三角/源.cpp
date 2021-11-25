#include<stdio.h>
int main()
{
	int a[100] = { 0 };
	int b[100] = { 0 };
	int i, j; 
	int temp;
	a[1] = 1;
	for (j = 1; j <= 10; j++)
	{
		for (i = 1; i <= j; i++)
		{
			b[1] = 1;
			b[i + 1] = a[i] + a[i + 1];
		}
		//j++;
		for (temp = 1; temp <= j+1; temp++)
		{
			a[i] = b[i];
		}
		for (temp = 1; temp <= j+1; temp++)
		{
			printf("%d\n", a[i]);
		}
	}
}