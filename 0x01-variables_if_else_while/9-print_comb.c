#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, - 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
        int i;

        for (i = 0; i < 10; i++)
        {
                putchar((char)i + '0');

                if (i == 9)
                        continue;
                putchar(',');
                putchar(' ');
        }
        putchar('\n');

        return (0);
}

