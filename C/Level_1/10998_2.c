#include <stdio.h>
int main(void)
{
    int A=0, B=0, result=0;
    scanf("%d%d", &A, &B);
    for (int i = 0; i < B; i++) {
        result += A;
    }
    printf("%d\n", result);
    return 0;
}