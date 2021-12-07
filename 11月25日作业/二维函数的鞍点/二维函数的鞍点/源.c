#include <stdio.h>
int main()
{
	int a[4][4];
	int i, j, k, max, maxj, temp;
	printf("请输入一个4*4的数组\n");
	for (i = 0; i <= 3; i++)
		for (j = 0; j <= 3; j++)
			scanf_s("%d", &a[i][j]);
	printf("\n");

	for (i = 0; i <= 3; i++)
	{
		max = a[i][0];
		maxj = 0;
		for (j = 0; j <= 3; j++)
			if (a[i][j] > max)
			{
				max = a[i][j];
				maxj = j;
			}
		temp = 1;
		for (k = 0; k <= 3; k++)
			if (max > a[k][maxj])
			{
				temp = 0;
				continue;
			}
		if (temp)
		{
			printf("a[%d][%d]=%d\n", i+1, maxj+1, max);
			break;
		}
	}
	if (!temp)
		printf("it doesn't exist.\n");
	return 0;
}
