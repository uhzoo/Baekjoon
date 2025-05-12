#include <stdio.h>
int main(void)
{
    int A=0, B=0;
    scanf("%d%d", &A, &B);
    // not 연산으로 1의 보수를 구한 뒤 1을 더하여 2의 보수를 구하여 더해주면 뺄셈을 할 수 있다.
    printf("%d", A + (~B + 1));
    return 0;
}