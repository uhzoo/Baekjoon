#include <stdio.h>
int sum(int a);
int main(void)
{
    int nInput=0;
    scanf("%d", &nInput);
    printf("%d\n", sum(nInput));
    return 0;
}
int sum(int a)
{
    if (a == 1) return 1;
    return a + sum(a - 1);
}