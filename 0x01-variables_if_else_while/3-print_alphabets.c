#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (void)
{
char l = 'a';
char f = 'z';

while (l <= f)
{
putchar(l);
l++;
}
l='A';
f='Z';
while (l <= f)
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
