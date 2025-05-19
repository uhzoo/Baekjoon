#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, total = 0;
    scanf("%d", &N);
    char numbers[N + 1];
    scanf("%s", numbers);
    for (int i = 0; i < N; i++)
    {
        total += numbers[i] - '0';
    }
    printf("%d", total);
    return 0;
}