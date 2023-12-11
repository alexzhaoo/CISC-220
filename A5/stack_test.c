#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "stack_utils.h"

void print_int(const void *elem)
{
    int val = *((int *)elem);
    printf("%d", val);
}

int main(void)
{
    stack *s = stack_init_empty();

    int *arr = malloc(5 * sizeof(int));
    arr[0] = 7;
    arr[1] = 6;
    arr[2] = 5;
    arr[3] = 4;
    arr[4] = 3;

    stack_push(s, arr);
    stack_push(s, arr + 1);
    stack_push(s, arr + 2);
    stack_push(s, arr + 3);
    stack_push(s, arr + 4);

    stack_print(s, print_int);

    if (stack_is_sorted(s, double_less_than))
    {
        printf("%s\n", "hi");
    }
    else
    {
        printf("%s\n", "kys");
    }

    stack_print(s, print_int);

    free(arr);
    stack_free(s, NULL);

    return 0;
}