#include<stdio.h>
int main()
{
	int a[100] = { 0 };
	int b[100] = { 0 };
	int i, j; 
	int temp;
	a[1] = 1;
	printf("1\n");
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
			a[temp] = b[temp];
		}
		for (temp = 1; temp <= j+1; temp++)
		{
			printf("%d\t", a[temp]);
		}
		printf("\n");
	}
}