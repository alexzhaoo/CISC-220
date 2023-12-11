#include <stdio.h>

double sumanddiff(const double *x, const double *y, double *diff)
{
    *diff = *x - *y;

    return (*x + *y);
}

int main()
{
    const double x = 15.0;
    const double y = 12.0;
    double diff;
    printf("%f\n", sumanddiff(&x, &y, &diff));
    printf("%f\n", diff);
    return 0;
}