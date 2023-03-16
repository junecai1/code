#include<stdio.h>
#include<windows.h>
int main()
{
	/*int i,j,k,m,n;
	for(i=0;i<101;i+=1)
	{
		for(j=0;j<101;j+=1)
		{
			for(k=0;k<101;k+=3)
			{ m=(5*i+3*j+k/3);
			  n=(i+j+k);
				if(sum==m&&sum==n)
				{printf("鸡翁%d只  鸡母%d只  鸡雏%d只\n",i,j,k);}
			}
		}
	}*/
	int i, j, k, m, n;;
	for (i = 1; i <= 5; i++)//a
	{
		
		for (j = 1; j <= 5; j++)//b
		{
			for (k = 1; k <= 5; k++)//c
			{
				
				for (m = 1; m <= 5; m++)//d
				{
					for (n = 1; n <= 5; n++)//e
					{
						if (k != 5 && n - m == 2 && n != 4 && i != 5 && i != 1 && k - j == 1
							&&j!=k&&j!=m&&j!=n&&m!=n&&i!=j&&i!=k&&i!=m&&i!=n&&k!=m&&k!=n)
						{
							printf("A是第%d名  B是第%d名  C是第%d名  D是第%d名  E是第%d名\n", 6-i, 6-j, 6-k, 6-m, 6-n);
						}
						
						

					}
				}
			}

		}
	}

	return 0;
}

