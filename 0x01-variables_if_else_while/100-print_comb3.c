#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * * Main - program that prints all possible different combinations of two digits
 *  * Description: separated by ,/ digits must be different/use the putchar (printf, puts, etc…) is forbidden)
 *   * Return: Always 0
 *    *
 *     */
int main(void)
{
	int ch;
	int n;
	for (ch = 48; ch <= 57; ch++)
	{
		for(n = 49; n <= 57; n++)
		{
			if (n > ch)
		{
			putchar(ch);
			putchar(n);
			if (ch != 57)
				{
					putchar(44);
					putchar(32);
				}
		}
		}
	}
}
