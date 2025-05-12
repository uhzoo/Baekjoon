#include <stdio.h>
int main(void)
{
    int A=0, B=0;
    scanf("%d%d", &A, &B);
    // 1의 자리
    printf("%d\n", A * (B % 10));
    // 10의 자리
    printf("%d\n", A * ((B / 10) % 10));
    // 100의 자리
    printf("%d\n", A * (B / 100));
    printf("%d", A * B);
    return 0;
}