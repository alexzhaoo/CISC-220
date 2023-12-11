#ifndef STACK_UTILS_H
#define STACK_UTILS_H

#include "stack.h"

typedef bool (*stack_leq_func)(const void *, const void *);
// DECLARE THE FUNCTIONS FOR QUESTIONS 3, 4, AND 5 HERE
stack *stack_split_at(stack *s, size_t index);
bool double_less_than(const void *val1, const void *val2);

bool stack_is_sorted(const stack *s, stack_leq_func eq);

#endif // STACK_UTILS_H