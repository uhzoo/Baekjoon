#include <stdio.h>

int main(void)
{
    int nInput = 0, targetNum = 0, cnt = 0;
    scanf("%d", &nInput);
    int nArray[nInput];
    for (int i = 0; i < nInput; i++) {
        scanf("%d", &nArray[i]);
    }
    scanf("%d", &targetNum);
    for (int i = 0; i < nInput; i++) {
        if (nArray[i] == targetNum) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}