// MXndir1.cpp : Defines the entry point for the console application.
//

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int mat[100][100]; int a, b, t, k, n, m, i, j,h,l;
	printf("N="); scanf("%d", &n);
	printf("M="); scanf("%d", &m);
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < m;j++)
			mat[i][j] = 0;
	}
	printf("K="); scanf("%d", &k); h = 0;
	do
	{
		h++;
		printf("T="); scanf("%d", &t);
		printf("a="); scanf("%d", &a);
		printf("b="); scanf("%d", &b);
		if (t == 3)
		{
			for (i = 0;i < n;i++)
				mat[i][b] = -1;
			for (i = 0;i < m;i++)
				mat[a][i] = -1;
			if (a <= b)
			{
				for (i = 0,j=b-a;i <= a + m - 1- b;i++,j++)
				{
					mat[i][j] = -1;				
				}
			
				for (i = a + b, j = 0;i >= 0;i--, j++)
				{
					mat[i][j] = -1;
				}

			}
			else
			{
				for (j = 0, i = a - b;i<n;i++,j++)
				{
					mat[i][j] = -1;
				}
				for (j = a+b, i = 0;j >= 0;i++, j--)
				{
					mat[i][j] = -1;
				}
			}
		}
		else
			if (t == 1)
			{
				for (i = 0;i < n;i++)
					mat[i][b] = -1;
				for (i = 0;i < m;i++)
					mat[a][i] = -1;
			}
			else
				if (t == 2)
				{
					if (a <= b)
					{
						for (i = 0, j = b - a;i <= a + m - 1 - b;i++, j++)
						{
							mat[i][j] = -1;
						}

						for (i = a + b, j = 0;i >= 0;i--, j++)
						{
							mat[i][j] = -1;
						}

					}
					else
					{
						for (j = 0, i = a - b;i<n;i++, j++)
						{
							mat[i][j] = -1;
						}
						for (j = a + b, i = 0;j >= 0;i++, j--)
						{
							mat[i][j] = -1;
						}
					}
				}


	} while (k > h);
	h = 0;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < m;j++)
			if (mat[i][j] == 0)
			{
				h++;
			}
	}
	printf("\n");
	printf("ELQ=%d", h);
	scanf("%d", &n);
    return 0;
}
