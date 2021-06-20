#include<stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 48;
char c = 'a';

while (i < 58)
{
putchar(i);
i++;
}
while (c < 'g')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
