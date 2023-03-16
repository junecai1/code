#include<stdio.h>
int main()
{
	/*int N;*/
	int tel[10], num[10] = { 1,2,34,4,5,6,7,8,9,56};
	void init(int*arr[],int len);
	init(&tel,sizeof(tel)/sizeof(tel[0]));
	for (int j = 0; j < 10; j++)
	{
		printf("%d", tel[j]); 
	}
	printf("\n");
	for (int j = 0; j < 10; j++)
	{
		printf("%d", num[j]);
	}printf("\n");
	void reverse(int* arr, int len);
	reverse(&tel, sizeof(num) / sizeof(num[0]));
	for (int j = 0; j < 10; j++)
	{
		printf("%d", num[j]);
	}
	/*scanf_s("%d", &N);*/
	/*void Mult(int);
	Mult(N);*/
	return 0;
}
//void Mult(int a)
//{
//	int i, j;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d¡Á%d=%d  ",j,i, i * j);
//
//		}
//		printf("\n");
//	}
//
//}
void init(int* arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		arr[i]=0 ;
	}
}
void reverse(int* arr, int len)
{
	
	for (int i = 0; i < len; i++)
	{
		arr[i] = arr[len - 1 - i];
	}

}