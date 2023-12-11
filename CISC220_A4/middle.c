#include <float.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int length = argc;

    if (length == 1)
    {
        float out = 0.0;
        printf("%f\n", out);
    }
    else if (length != 1 && length != 4)
    {
        exit(1);
    }
    else
    {
        if (atof(argv[1]) >= atof(argv[2]))
        {
            if (atof(argv[2]) >= atof(argv[3]))
            {
                printf("%f\n", atof(argv[2]));
            }
            else if (atof(argv[3]) >= atof(argv[1]))
            {
                printf("%f\n", atof(argv[1]));
            }
            else
            {
                printf("%f\n", atof(argv[3]));
            }
        }
        else
        {
            if (atof(argv[1]) >= atof(argv[3]))
            {
                printf("%f\n", atof(argv[1]));
            }
            else if (atof(argv[2]) <= atof(argv[3]))
            {
                printf("%f\n", atof(argv[2]));
            }
            else
            {
                printf("%f\n", atof(argv[3]));
            }
        }
    }

    return 0;
}
