#include<stdio.h>
/**
  *main - Entry point
  *Return: Always 0
  */
int main(void)
{
int n = 65;
for (n = 97; n < 123; n++)
{
	putchar(n);
}
for (n = 65; n < 90; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
