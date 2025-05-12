#include <stdio.h>
int main(void)
{
    int hour=0, min=0;
    scanf("%d%d", &hour, &min);
    if (min < 45) printf("%d %d", (hour == 0 ? 23 : hour - 1), 15 + min);
    else printf("%d %d", hour, min - 45);
    return 0;
}