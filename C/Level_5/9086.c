#include <stdio.h>
#include <string.h>

int main(void)
{
    int T = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        char word[1001];
        scanf("%s", word);
        printf("%c%c\n", word[0], word[strlen(word)-1]);
    }
    return 0;
}