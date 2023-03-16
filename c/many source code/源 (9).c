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
    printf("请输入工作时间(1-7)和当天工作时间：\n");
    scanf_s("%d%f", &wday,&wtime);
    
    switch (wday)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:printf("工资如下：星期%d 工资%f元", wday, salary = (20 * wtime) * 0.955);; break;
    case 6:
    case 7:printf("工资如下：星期%d 工资%f元", wday, salary = (20 * 3 * wtime) * 0.955);; break;
    default:printf("请核对后输入"); break;
    }
    

    return 0;
}
