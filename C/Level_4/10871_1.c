#include <stdio.h>

int main(void)
{
    int N = 0, X = 0;
    scanf("%d%d", &N, &X);
    int array[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < N; i++) {
        if (array[i] < X)
            (i == N - 1) ? printf("%d\n", array[i]) : printf("%d ", array[i]);
    }
    return 0;
}