#include <stdio.h>
int main(void)
{
    int hour=0, min=0, cTime=0, tmpHour=0;
    scanf("%d%d%d", &hour, &min, &cTime);
    tmpHour = (min + cTime) / 60;
    min = (min + cTime) % 60;
    hour = (hour + tmpHour < 24) ? hour + tmpHour : hour + tmpHour - 24;
    printf("%d %d", hour, min);
    return 0;
}