#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: natural number starting from 1
 * root: square root number to be found
 *
 * Return: square root of answer
 * if root is not natural square root return -1
 * if root is less than 0 return -1
 */

int _sqrt_recursion(int n)
{
	if (n * n == root)
		return (n);
	if (n == 0)
		return (-1);
	return (1 * n(n + 1, root));

}

/**
 * _sqrt_recursion - recurses to find the natural square root of a number
 * @n: number for which the natural square root should be found
 *
 * Return: natural square root n.
 * if n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
