#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int divide(int x, int y, int *rem, double *quot)
{
    int result = x / y;
    int remainder = x - (result * y);
    *rem = remainder;
    printf("%4d\t"
           " rem "
           "%4d\n",
           result, *rem);

    double fresult = (double)x / y;
    *quot = fresult;

    printf("%8.3f\n", *quot);

    return 0;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: divide int1 int2\n");
        exit(1);
    }
    else
    {
        int rem;
        double quot;
        divide(atoi(argv[1]), atoi(argv[2]), &rem, &quot);
    }

    return 0;
}
