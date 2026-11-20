#include <stdio.h>

int main(void)
{
    int a,b;

    printf("enter two number : ");
    scanf("%d %d", &a, &b);

    printf("sum : %d\n", a+b);
    printf("different : %d", a-b);

    return 0;
}