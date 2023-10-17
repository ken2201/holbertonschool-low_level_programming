#include <stdio.h>

/**
 * main - print lower case except q and e
 *
 *Return: always (success)
 **/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
