#include <stdio.h>
/**
*main - print singlr digit numbers
*
*Return: always(success)
**/
int main(void)
{
char n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
