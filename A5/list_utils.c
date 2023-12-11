#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list_utils.h"

bool list_insert_all(list *dest, size_t index, const list *src)
{
    if (dest == NULL || src == NULL || dest == src || index > list_size(dest))
    {
        return false;
    }

    while (dest->capacity < dest->size + list_size(src))
    {
        add_capacity(dest);
    }

    for (int i = dest->size - 1; i >= index; i--)
    {
        dest->arr[i + list_size(src)] = dest->arr[i];
    }
    for (int i = 0; i < list_size(src); i++)
    {
        dest->arr[i + index] = src->arr[i];
    }

    dest->size += list_size(src);

    return true;
}
list *list_split_at(list *t, size_t index)
{
    list *x = list_init(list_size(t) - index);
    if (t == NULL || index > list_size(t) || !x)
    {
        return NULL;
    }
    if (index == list_size(t))
    {
        return x;
    }
    for (int i = 0; i < list_size(t) - index; i++)
    {
        x->arr[i] = t->arr[i + index];
    }
    size_t n = list_size(t) - index;
    if (n > 0)
    {
        memmove(&t->arr[index], &t->arr[index + n], n * sizeof(int));
        t->size -= n;
    }
    x->size = n;

    return x;
}