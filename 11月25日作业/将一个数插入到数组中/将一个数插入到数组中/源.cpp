#include<stdio.h>
int main()
{
	double a[10] = { 1,3,5,7,9,11 };
	int i, j;
	double temp;
	scanf_s("%lf", &temp);
	
	for (i = 0; i <= 5; i++)
	{
		if (temp <= a[i])
		{
			for (j = 5; j >= i; j--)
			{
				a[j + 1] = a[j];
			}
			a[j+1] = temp;
			break;
		}
	}
	
	
	for (i = 0; i <= 6; i++)
	{
		printf("%lf\n", a[i]);
	}
}