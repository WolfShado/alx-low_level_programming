#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - the function operator
  * @a: a given number
  * @b: a given number
  *
  * Return: (result) success
  */
int op_add(int a, int b)
{
return (a + b);
}
/**
  * op_sub - the function operator
  * @a: a given number
  * @b: a given number
  *
  * Return: (result) success
  */
int op_sub(int a, int b)
{
return (a - b);
}
/**
  * op_mul - the function operator
  * @a: a given number
  * @b: a given number
  *
  * Return: (result) success
  */
int op_mul(int a, int b)
{
return (a * b);
}
/**
  * op_div - the function operator
  * @a: a given number
  * @b: a given number
  *
  * Return: (result) success
  */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
  * op_mod - the function operator
  * @a: a given number
  * @b: a given number
  *
  * Return: (result) success
  */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
