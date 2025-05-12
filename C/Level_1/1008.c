#include <stdio.h>
int main(void)
{
    //int A=0, B=0;
    int A=160, B=0;
    for (int i = 0; i < 5; i++)
        printf("%d\n", A>>i);
    //scanf("%d%d", &A, &B);
    //printf("%.9f\n", (double)A / B);
    return 0;
}