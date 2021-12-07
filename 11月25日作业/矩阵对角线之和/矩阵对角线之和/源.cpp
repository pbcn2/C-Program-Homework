#include<stdio.h> 
int sum;
int main()
{
	int a[4][4];
	int i, j;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 1; i <= 3; i++)
		sum += a[i][i];
	printf("\n%d", sum);
	return 0;
}
