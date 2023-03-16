#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, p;
    double area;
    scanf_s("%d%d%d", &a, &b, &c);
    if (a>(b-c) &&b>c-a&&c>a-b)
    {
    p = (a + b + c)/2;
    area = pow(p * (p - a) * (p - b) * (p - c),0.5);
    printf("%g", area);
    }
    else
    {
        printf("该数值不能构成三角形");
    }


    return 0;
}
