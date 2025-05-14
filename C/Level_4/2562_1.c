#include <stdio.h>

int main(void)
{
    int length = 9;
    int array[length];
    for (int i = 0; i < length; i++) {
        scanf("%d", &array[i]);
    }
    int max = array[0], maxPos = 1;
    for (int i = 0; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
            maxPos = i + 1;
        }
    }
    printf("%d\n%d", max, maxPos);
    return 0;
}