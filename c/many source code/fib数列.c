#include<stdio.h>
int main()
{
	int f1, f2, f3, i=1;
	f1 = 0, f2 = 1;
	printf("%d\t", f2);
	for(i=1;i<=30;i++)
	{
		f3 = f1 + f2;
		printf("%-10d\t", f3);
		f1 = f2, f2 = f3;
		if (i % 5==0)
			printf("\n");

	}
	return 0;
}