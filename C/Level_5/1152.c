#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[1000001];
    scanf("%[^\n]", word);
    int length = strlen(word);
    int cnt = 0;
    if (word[0] == ' ')
        cnt--;
    if (word[length - 1] != ' ') 
        cnt++;
    if (word[length - 1] == ' ' && word[length - 2] == ' ')
        cnt--;
    for(int i = 0; i < length; i++) {
        if (word[i] == ' ') 
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}