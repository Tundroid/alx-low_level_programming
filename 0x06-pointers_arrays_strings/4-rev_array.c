#include "main.h"
/**
* reverse_array - reverses the contents on an array of integers
* @a: array pointer
* @n: number of array elements
*/
void reverse_array(int *a, int n)
{
	int i = 0;

	for (; i < n / 2; i++)
	{
		if (a[i] != a[n - i - 1])
		{
			a[i] = a[i] + a[n - i - 1];
			a[n - i - 1] = a[i] - a[n - i - 1];
			a[i] = a[i] - a[n - i - 1];
		}
	}
}
