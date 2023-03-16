#include<stdio.h>
int main()
{
	double a = 1007.1007;
	printf("%#x\n", a);
	printf("%#e\n", a);
	printf("%#d\n", a);
	printf("%#g\n", a);
	printf("%d\n", &a);
	printf("%p\n", &a);
	printf("%#o", a);
	return 0;
}
