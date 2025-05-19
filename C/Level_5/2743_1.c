#include <stdio.h>

int main(void)
{
    char word[101] = { 0 };
    int length = 0;
    scanf("%s", word);
    for (int i = 0; i < 101; i++) {
        if (word[i] == 0)
            break;
        length++;
    }
    printf("%d\n", length);
    return 0;
}