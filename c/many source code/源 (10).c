#include<stdio.h>

int main()
{
    int a,b,c;

    scanf_s("%d%d%d",  &a,  &b,  &c);

    if (a > b)
    {
        if (a > c)
        {
            if (b > c)
                printf("%d\t%d\t%d\t",  a,  b,  c);
            else//c>b
                printf("%d\t%d\t%d\t",  a,  c,  b);
        }
        else//c>a
        {
            if (a > b)
                printf("%d\t%d\t%d\t",  c,  a,  b);
            else//a<b
                printf("%d\t%d\t%d\t",  c,  b,  a);

        }

    }
    else//b>a
    {
        if (b > c)
        {
            if (c > a)
                printf("%d\t%d\t%d\t",  b,  c,  a);
            else//c<a
                printf("%d\t%d\t%d\t",  b,  a,  c);
        }
        else//c>b
        {
            if (b > a)
                printf("%d\t%d\t%d\t",  c,  b,  a);
            else//a>b
                printf("%d\t%d\t%d\t",  c,  a,  b);
        }

    }
    return 0;
}

