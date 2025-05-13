#include <stdio.h>
int main(void)
{
    int nInput=0;
    scanf("%d", &nInput);
    for (int i = 1; i <= nInput; i++) {
        for (int j = 0; j < nInput - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}