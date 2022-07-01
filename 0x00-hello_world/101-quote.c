#include <stdio.sh>
#include <unistd.h>
/*
 *main-prints "and that piece of art is useful"
 *Dora Korpar, 19-10-2015
 *followed by new line, to standard error
 *Return: Always 0(Success)
 */
int main (void)
{
write(2, "and that piece of art is useful\"-Dora Korpar, 19-10-2015\n,59");
return (1);
}
