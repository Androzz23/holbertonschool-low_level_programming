#include<stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: use putchar to print ints
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n = 48;

while (n < 58)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
