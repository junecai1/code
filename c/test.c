#include <stdio.h>
int main()
{
    int add =110;
    int* p=&add;
    printf("*add = %d\n",*p=*p+1);
    printf("add = %d",add);
    getchar();
    return 0;
}