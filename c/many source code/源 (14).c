#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, k,n;
	scanf_s("%d", &n);
	if (n % 2 == 0)
	{
		for (i = -(n - 1); i < n; i += 2)
		{
			for (j = 1; j < abs(i) + 1; j += 2)
				printf(" ");
			for (k = abs(i); k < n; k++)
			{
				printf("#");
			}
			printf("\n");
		}
	}
	else
		for(i)
	return 0;
}
//int main()
//{
//    int i, j, k, n;
//    scanf_s("%d", &n);
//    if (n % 2 == 1)
//        for (i = (n / 2 * 2) * (-1); i <= (n / 2 * 2); i += 2)
//        {
//            for (j = 1; j <= abs(i); j += 2)
//                printf(" ");
//            for (k = abs(i); k <= (n / 2 * 2); k++)
//                printf("#");
//            printf("\n");
//        }
//    else
//        for (i = (n - 1) * (-1); i <= n - 1; i += 2)
//        {
//            for (j = 1; j <= abs(i); j += 2)
//                printf(" ");
//            for (k = abs(i); k <= n; k++)
//                printf("#");
//            printf("\n");
//        }
//    return 0;
//}
