#include <stdio.h>
#include <string.h>

int main(void)
{
    int T = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int R = 0;
        char S[21];
        scanf("%d %s", &R, S);
        int length = strlen(S);
        for (int j = 0; j < length; j++) {
            for (int k = 0; k < R; k++) {
                printf("%c", S[j]);
            }
        }
        printf("\n");
    }
    return 0;
}