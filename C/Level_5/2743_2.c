#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101];
    scanf("%s", word);
    printf("%lu\n", strlen(word));
    return 0;
}