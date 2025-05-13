#include <stdio.h>
int main(void)
{
    int nInput=0;
    scanf("%d", &nInput);
    for (int i = 1; i <= nInput; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}