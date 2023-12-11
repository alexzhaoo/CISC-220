#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list_utils.h"

int main(void)
{
    list *t = list_init_empty();
    list *x = list_init_empty();
    list_add(t, 3);
    list_add(t, 4);
    list_add(t, 5);
    list_add(t, 6);
    list_add(t, 7);
    list_add(t, 8);
    list_add(x, 10);
    list_add(x, 11);
    list_add(x, 12);
    list_insert_all(t, 2, x);
    list_print(t);
    list *z = list_split_at(t, 2);
    list_print(t);
    list_print(z);
    list_free(t);

    return 0;
}