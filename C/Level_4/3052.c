#include <stdio.h>
#include <stdlib.h>
void Sort(int array[], int length);
int Count_Replicated(int array[], int length);

int main(void)
{
    int range = 10, divide = 42;
    int *numbers = (int *)malloc(sizeof(int) * range);
    for (int i = 0; i < range; i++) {
        scanf("%d", &numbers[i]);
        numbers[i] %= divide;
    }
    Sort(numbers, range);
    printf("%d\n", Count_Replicated(numbers, range));
    free(numbers);
    return 0;
}

void Sort(int array[], int length)
{
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (array[i] > array[j]) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

int Count_Replicated(int array[], int length)
{
    int cnt = length;
    for (int i = 0; i < length - 1; i++) {
        if (array[i] == array[i + 1]) cnt--;
    }
    return cnt;
}