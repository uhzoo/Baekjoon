#include <stdio.h>
int main(void)
{
    int A=0, B=0, C=0, tmp=0;
    scanf("%d%d%d", &A, &B, &C);
    if (A == B && B == C) {
        printf("%d\n", 10000 + A * 1000);
    }
    else if ((A == B && B != C) || (A == C && A != B) || (B == C && A != B)) {
        if (A == B) {
            printf("%d\n", 1000 + A * 100);
        } else if (A == C) {
            printf("%d\n", 1000 + A * 100);
        } else {
            printf("%d\n", 1000 + B * 100);
        }
    }
    else {
        tmp = A;
        tmp = (tmp > B) ? tmp : B;
        tmp = (tmp > C) ? tmp : C;
        printf("%d", tmp * 100);
    }
}
