#include <stdio.h>
int main(void)
{
    int X=0, N=0, total=0;
    scanf("%d%d", &X, &N);
    for (int i=0; i < N; i++) {
        int a=0, b=0;
        scanf("%d%d", &a, &b);
        total += (a * b);
    }
    (X == total) ? puts("Yes") : puts("No");
    return 0;
}