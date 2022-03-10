#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * struct fun  - gives a list of functions and their type
 * @use_type: the numerical operator to use
 * @f: the function related to that operator

typedef struct fun
{
        char usetype;
        void (*f)(va_list);
} fun_t;
*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
