#include<stdio.h>
/**
  *main - Entry point
  *Return: Always 0 (success)
  */
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("size of a long int: %d byte(s)", sizeof(long int));
	printf("size of a long long: %d byte(s)", sizeof(long long));
	printf("size of a float: %d byte(s)", sizeof(float));
	return (0);
}
