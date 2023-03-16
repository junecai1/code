#include<stdio.h>
int main()
{
	int tag, i, j;
	for (i = 3; i <=50; i++)
	{
		tag = 1;
		for(j=2;j<=i-1;j++)
			if (i % j == 0)
			{
				tag = 0;
				j= i;
			}
		if (tag == 1)
			printf("%3d", j);
	}
	printf("\n");

	return 0;
}