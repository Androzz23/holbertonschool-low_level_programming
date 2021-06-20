#include<stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char C = 'z';

while (C >= 'a')
{
putchar(C);
C--;
}
putchar('\n');

return (0);
}
