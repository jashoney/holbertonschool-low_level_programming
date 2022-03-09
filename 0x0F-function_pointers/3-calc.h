#ifndef CALC_H
#define CALC_H

/**
 * struct opchoose - gives a list of functions and their operators
 * @operator: the numerical operator to use
 * @f: the function related to that operator
 */
typedef struct opchoose
{
	char *operator;
	int (*f)(int, int);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
