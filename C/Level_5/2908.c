#include <stdio.h>

int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);
    int modified_A = 0, modified_B = 0;
    modified_A = ((A % 10) * 100) + (((A % 100) / 10) * 10) + A / 100;
    modified_B = ((B % 10) * 100) + (((B % 100) / 10) * 10) + B / 100;

    printf("%d\n", (modified_A > modified_B) ? modified_A : modified_B);
    return 0;
}