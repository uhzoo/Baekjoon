#include <stdio.h>
#include <stdlib.h>
double get_max(double array[], int length);
double get_average(double array[], int length, double max);

int main(void)
{
    int N = 0;
    scanf("%d", &N);
    double *scores = (double *)malloc(sizeof(double) * N);
    for (int i = 0; i < N; i++) 
        scanf("%lf", &scores[i]);
    printf("%.6lf", get_average(scores, N, get_max(scores, N)));
    free(scores);
    return 0;
}

double get_max(double array[], int length)
{
    double max = array[0];
    for (int i = 1; i < length; i++)
        if (array[i] > max)
            max = array[i];
    return max;
}

double get_average(double array[], int length, double max)
{
    double total = 0;
    for (int i = 0; i < length; i++)
        total += array[i] / max * 100;
    return total / length;
}