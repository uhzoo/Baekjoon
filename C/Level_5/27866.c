#include <stdio.h>

int main(void)
{
    char S[1001] = {0};
    int i = 0;
    scanf("%s", S);
    scanf("%d", &i);
    printf("%c\n", S[i - 1]);
    return 0;
}