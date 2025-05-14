#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, M;
    scanf("%d%d", &N, &M);
    int *basket = (int *)calloc(N, sizeof(int));
    for (int a = 0; a < M; a++) {
        int i, j, k;
        scanf("%d%d%d", &i, &j, &k);
        for (int b = i - 1; b <= j - 1; b++) {
            basket[b] = k;
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", basket[i]);
    }
    free(basket);
    return 0;
}