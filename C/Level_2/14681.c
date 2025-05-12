#include <stdio.h>
int main(void)
{
    int X=0, Y=0;
    scanf("%d%d", &X, &Y);
    if (X > 0 && Y > 0) puts("1");
    else if (X < 0 && Y > 0) puts("2");
    else if (X < 0 && Y < 0) puts("3");
    else puts("4");
    return 0;
}