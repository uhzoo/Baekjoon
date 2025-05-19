#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[16];
    scanf("%s", word);
    int length = strlen(word);
    int cnt = 0;
    for (int i = 0; i < length; i++) {
        if (word[i] >= 65 && word[i] <= 67 )
            cnt += 3;
        else if (word[i] >= 68 && word[i] <= 70 )
            cnt += 4;
        else if (word[i] >= 71 && word[i] <= 73 )
            cnt += 5;
        else if (word[i] >= 74 && word[i] <= 76 )
            cnt += 6;
        else if (word[i] >= 77 && word[i] <= 79 )
            cnt += 7;
        else if (word[i] >= 80 && word[i] <= 83 )
            cnt += 8;
        else if (word[i] >= 84 && word[i] <= 86 )
            cnt += 9;
        else if (word[i] >= 87 && word[i] <= 90 )
            cnt += 10;
    }
    printf("%d\n", cnt);
    return 0;
}