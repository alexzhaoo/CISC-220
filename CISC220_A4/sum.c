#include <stdio.h>
#include <stdlib.h>

/*
 * Prints the values of a on a single line with no space between
 * the values. Prints a newline character after printing all of
 * the array values.
 *
 * Values are printed left to right starting from a[0] and ending with a[7].
 */
void print(int a[static 8])
{
    for (int i = 0; i < 8; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}

void tobinary(char str[static 8], int bin[static 8])
{
    for (int i = 0; i < 8; i++)
    {
        bin[i] = str[i] - '0';
    }
}

/*
 * Sums the 8-digit binary values x and y storing the result
 * in z. The sum is computed using the standard long
 * addition algorithm from grade school.
 */
int sum(int x[static 8], int y[static 8], int z[static 8])
{
    int rem = 0;
    int count = 0;
    for (int i = 7; i >= 0; i--)
    {
        int added = x[i] + y[i] + rem;
        rem = 0;
        if (added == 0)
        {
            z[i] = 0;
        }
        else if (added == 1)
        {
            z[i] = 1;
        }
        else
        {
            rem = 1;
            z[i] = 0;
            count++;
        }
    }
    return count;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        exit(1);
    }
    char *binput = argv[1];
    char *binput1 = argv[2];
    int bin[8];
    int bin1[8];
    int result[8];
    tobinary(binput, bin);
    tobinary(binput1, bin1);
    int overflow = sum(bin, bin1, result);
    print(result);

    if (overflow == 8)
    {
        printf("overflow\n");
    }

    return 0;
}
