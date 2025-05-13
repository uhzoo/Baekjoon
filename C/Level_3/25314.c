#include <stdio.h>
int main(void)
{
    int N=0, cnt=0;
    scanf("%d", &N);
    cnt = N / 4;
    for (int i=0; i < cnt; i++) {
        (i != cnt - 1) ? printf("long ") : printf("long int\n");
    }
    return 0;
}