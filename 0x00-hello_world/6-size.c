#include<stdio.h>
/**
  *main - Entry point
  *Return: Always 0 (success)
  */
int main(void)
{
	printf("Size of a char: %ld byte(s)", sizeof(char));
	printf("Size of an int: %ld byte(s)", sizeof(int));
	printf("size of a long int: %ld byte(s)", sizeof(long int));
	printf("size of a long long: %ld byte(s)", sizeof(long long));
	printf("size of a float: %ld byte(s)", sizeof(float));
	return (0);
}
