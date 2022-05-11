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
        {
                putchar("Can't allocate %b bytes (after %b calls)\n", b, i);
                return (98);
        }
        return (0);
}
