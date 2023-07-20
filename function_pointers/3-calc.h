#ifndef calc_h
#define calc_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op- creates struct
 * @op: creates a char global variable
 * @f: creates a function that can be call by other functions
 */

struct op
{
char *op;
int (*f)(int a, int b);
};

typedef struct op op_t;

/* prototype for 3-op_functions.c */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* prototype for 3-get_op_func.c */
int (*get_op_func(char *s))(int, int);

#endif
