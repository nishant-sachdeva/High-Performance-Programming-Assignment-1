#include <stdio.h>

int main()
{
	
	int a[100][100],b[100][100];

	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			a[i][j] = 2;
			b[i][j] = 2;
		}
	}

	int c[100][100];

	for (int j = 0; j < 100; ++j)
	{
		for (int i = 0; i < 100; ++i)
		{
			for (int k = 0; k < 100; ++k)
			{
				c[i][k] += a[i][j]*b[j][k];
			}
		}
	}

	printf("%d\n",c[0][0]);
	return 0;
}