#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer
  * @array: domaine of numbers
  * @size: is the number of elements in the array
  * @cmp: pointer to the function to be used to compare values
  *
  * Return: (-1) Success
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (j < size)
{
if (cmp(array[j]))
return (j);
j++;
}
}
}
return (-1);
}
