#include <stdio.h>
int main(void)
{
    int A=0;
    scanf("%d", &A);
    ((A % 4 == 0 && A % 100 != 0) || A % 400 == 0) ? puts("1") : puts("0");
    return 0;
}