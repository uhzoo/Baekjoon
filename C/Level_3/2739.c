#include <stdio.h>
int main(void)
{
    int nInput=0;
    scanf("%d", &nInput);
    for (int i=1; i < 10; i++) {
        printf("%d * %d = %d\n", nInput, i, nInput * i);
    }
    return 0;
}