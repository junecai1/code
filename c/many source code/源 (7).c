#include<stdio.h>

int main()
{
	int M;
	scanf_s("%d", &M);
	void print(unsigned int);
	print(M);
	return 0;
}
void print(unsigned int a)
{
	if (a > 9)
	{
		print(a / 10);
	}
	printf("%d\t", a % 10);
}