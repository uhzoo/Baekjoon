#include <stdio.h>
int main(void)
{
    int cnt=0;
    scanf("%d", &cnt);
    for (int i=0; i < cnt; i++) {
        int A=0, B=0;
        scanf("%d%d", &A, &B);
        printf("%d\n", A+B);
    }
}