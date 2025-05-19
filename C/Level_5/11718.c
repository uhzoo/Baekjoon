#include <stdio.h>

int main(void)
{
    char word[101];
    while (fgets(word, sizeof(word), stdin) != NULL) {
        printf("%s", word);
    }
    return 0;
}