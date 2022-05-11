#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: size of memory to allocate
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
        void *tab;

        tab = malloc(b);
        if (tab == NULL)
		exit(98);
        return (0);
}
