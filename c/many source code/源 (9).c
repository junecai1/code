//#include<stdio.h>
//#include<math.h>
//int p_prime(int j)
//{
//	int n;
//	for (n = 2; n <= sqrt(j); n++)
//	{
//		if (j % n == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int prime,i,count=0;
//	for (i = 100; i <= 200; i++)
//	{
//		p_prime(i);
//		if (p_prime(i) == 0)
//		{
//			printf("%d  ", i);
//			count++;
//		}
//	}printf("\n%d", count);
//	return 0;
//}
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int wday;
    float wtime,salary;
    printf("�����빤��ʱ��(1-7)�͵��칤��ʱ�䣺\n");
    scanf_s("%d%f", &wday,&wtime);
    
    switch (wday)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:printf("�������£�����%d ����%fԪ", wday, salary = (20 * wtime) * 0.955);; break;
    case 6:
    case 7:printf("�������£�����%d ����%fԪ", wday, salary = (20 * 3 * wtime) * 0.955);; break;
    default:printf("��˶Ժ�����"); break;
    }
    

    return 0;
}
