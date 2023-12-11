// save as cmdline.c
#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        char *str = argv[i];
        printf("argv[%d] : %s\n", i, str);
    }
    return 0;
}