#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * * Main - program that prints all the numbers of base 16 in lowercase
 *  * Description: only use the putchar ((every other function (printf, puts, etc…) is forbidden))
 *   * Return: Always 0
 *    *
 *     */
int main(void)
{
	char ch;
	int n;
	for (n = 48; n <= 57; n++)
	{
		putchar(n)
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar (10);
return (0);

}

