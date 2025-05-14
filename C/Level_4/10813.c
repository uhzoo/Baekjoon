#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N = 0, M = 0;
    scanf("%d%d", &N, &M);
    int *basket = (int *)calloc(N, sizeof(int));
    for (int i = 0; i < N; i++)
        basket[i] = i + 1;
    for (int k = 0; k < M; k++) {
        int i = 0, j = 0, tmp = 0;
        scanf("%d%d", &i, &j);
        tmp = basket[i - 1];
        basket[i - 1] = basket[j - 1];
        basket[j - 1] = tmp;
    }
    for (int i = 0; i < N; i++)
        printf("%d ", basket[i]);
    free(basket);
    return 0;
}