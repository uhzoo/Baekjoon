#include <stdio.h>
int Is_Smaller(int array[], int length, int target);

int main(void)
{
    int N = 0, X = 0;
    scanf("%d%d", &N, &X);
    int array[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    Is_Smaller(array, N, X);
    return 0;
}

int Is_Smaller(int array[], int length, int target)
{
    for (int i = 0; i < length; i++) {
        if (array[i] < target) printf("%d ", array[i]);
    }
}