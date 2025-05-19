#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101];
    int ch = 97;
    scanf("%s", word);
    int length = strlen(word);
    for (int i = 0; i < 26; i++) {
        int pos = -1;
        for (int j = 0; j < length; j++) {
            if (word[j] == ch + i) {
                pos = j;
                break;
            }
        }
        printf("%d ", pos);
    }
    return 0;
}