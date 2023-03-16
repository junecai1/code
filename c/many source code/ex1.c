#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}
#include<string.h>
#include<windows.h>
int main()
{
	char A[] = { "1433224" };
	char B[] = { "1325648" };
	int left = 0;
	int right = strlen(A) - 1;
	while (left <= right)
	{
		B[left] = A[left];
		B[right] = A[right];
		printf("%s\n", B);
		left++, right--;
		Sleep(200);
		system("cls");
	}
	printf("%s\n",B );
	return 0;
}