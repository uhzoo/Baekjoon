#include <stdio.h>
int main(viod)
{
    int nInput=0, total=0;
    scanf("%d", &nInput);
    for (int i=1; i <= nInput; i++) {
        total += i;
    }
    printf("%d\n", total);
    return 0;
}