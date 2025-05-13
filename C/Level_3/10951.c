#include <stdio.h>
int main(void)
{
    int A=0, B=0;
    while (1) {
        int n = scanf("%d%d", &A, &B);
        if (n != 2) 
            break;
        printf("%d\n", A + B);
    }
    return 0;
}