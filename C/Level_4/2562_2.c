#include <stdio.h>
#include <stdlib.h>
void Print_Max(int array[], int length);

int main(void)
{
    int length = 9;
    int *ptrArray = (int *)malloc(sizeof(int) * length); 
    for (int i = 0; i < length; i++) {
        scanf("%d", &ptrArray[i]);
    }
    Print_Max(ptrArray, length);
    free(ptrArray);
    return 0;
}

void Print_Max(int array[], int length)
{
    int max = array[0], maxPos = 1;
    for (int i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
            maxPos = i + 1;
        }
    }
    printf("%d\n%d\n", max, maxPos);
}