#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "stack_utils.h"

stack *stack_split_at(stack *s, size_t index)
{

    stack *x = stack_init_empty();

    if (!x || index > s->size)
    {
        return NULL;
    }

    if (s == NULL)
    {
        return false;
    }
    x->top = s->top;
    node *temp = s->top;
    for (int i = 0; i < index - 1; i++)
    {
        x->top = x->top->next;
        s->top = s->top->next;
    }
    x->top = x->top->next;
    s->top->next = NULL;
    s->top = temp;

    x->size += s->size - index;
    s->size -= index;

    return x;
}

bool double_less_than(const void *val1, const void *val2)
{
    return (*(const double *)val1 <= *(const double *)val2);
}

bool stack_is_sorted(const stack *s, stack_leq_func eq)
{
    if (s == NULL || eq == NULL)
    {
        return false;
    }
    node *x = s->top;

    while (x != NULL && x->next != NULL)
    {
        if (!eq(x->elem, x->next->elem))
        {
            return false;
        }
        x = x->next;
    }

    return true;
}