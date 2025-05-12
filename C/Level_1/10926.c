#include <stdio.h>
int main(void) 
{
    char str[51] = {0};
    scanf("%s", str);
    // Trigraph Sequences 방지
    printf("%s?\?!\n", str);
    return 0;
}