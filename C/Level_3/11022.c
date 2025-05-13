#include <stdio.h>
int main(void)
{
    int cnt=0;
    scanf("%d", &cnt);
    for (int i=1; i <= cnt; i++) {
        int A=0, B=0;
        scanf("%d%d", &A, &B);
        printf("Case #%d: %d + %d = %d\n", i, A, B, A+B);
    }
}