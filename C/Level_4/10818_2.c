#include <stdio.h>
#include <stdlib.h>

int Get_Min(int array[], int length);
int Get_Max(int array[], int length);

int main(void)
{
    int N = 0;
    scanf("%d", &N);
    int *array = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    printf("%d %d", Get_Min(array, N), Get_Max(array, N));
    free(array);
    return 0;
}

int Get_Min(int array[], int length)
{
    int min = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] < min) min = array[i];
    }
    return min;
}

int Get_Max(int array[], int length)
{
    int max = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] > max) max = array[i];
    }
    return max;
}
