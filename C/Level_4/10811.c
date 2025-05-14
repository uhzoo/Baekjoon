#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N = 0, M = 0;
    scanf("%d%d", &N, &M);
    int *basket = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        basket[i] = i + 1;
    for (int i = 0; i < M; i++) {
        int left = 0, right = 0;
        scanf("%d%d", &left, &right);
        if (left != right) {
            // 임시 바구니 생성
            int *tmpBasket = (int *)malloc(sizeof(int) * (right - left));
            int cnt = 0;
            for (int i = left - 1; i < right; i++) {
                // 임시 바구니에 역순으로 삽입
                tmpBasket[cnt] = basket[i];
                cnt ++;
            }
            for (int i = left - 1; i < right; i++) 
                // 바뀌어야 하는 위치에 데이터 삽입
                basket[i] = tmpBasket[right - i -1];
            free(tmpBasket);
        }
    }
    for (int i = 0; i < N; i++)
        printf("%d ", basket[i]);
    free(basket);
    return 0;
}