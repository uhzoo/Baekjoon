#include <stdio.h>
int Count_Target_Number(int array[], int length, int target);

int main(void)
{
    int nInput = 0, targetNum = 0, cnt = 0;
    scanf("%d", &nInput);
    int nArray[nInput];
    for (int i = 0; i < nInput; i++) {
        scanf("%d", &nArray[i]);
    }
    scanf("%d", &targetNum);
    printf("%d\n", Count_Target_Number(nArray, nInput, targetNum));
    return 0;
}

int Count_Target_Number(int array[], int length, int target)
{
    int cnt = 0;
    for (int i = 0; i < length; i++) {
        if (array[i] == target) cnt++;
    }
    return cnt;
}