#include <stdio.h>

int main(void)
{
    int N = 0, min = 0, max = 0;
    scanf("%d", &N);
    int array[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    min = array[0];
    max = array[0];
    for (int i = 0; i < N; i++) {
        if (array[i] < min) min = array[i];
        if (array[i] > max) max = array[i];
    }
    printf("%d %d\n", min, max);
    return 0;
}