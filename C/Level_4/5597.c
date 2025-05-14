#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *member = (int *)calloc(30, sizeof(int));
    for (int i = 0; i < 28; i++) {
        int n = 0;
        scanf("%d", &n);
        member[n - 1] = n;
    }
    for (int i = 0; i < 30; i++) {
        if (member[i] == 0) printf("%d\n", i+1);
    }
    free(member);
    return 0;
}