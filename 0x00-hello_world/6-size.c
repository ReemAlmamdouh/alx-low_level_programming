#include <stdio.h>
/**
 * main - Program that prints size of various types on the computer
 * Return: 0
 */
int main(void) 
{
	char a;
	int b;
	long int  c;
	long long int d;
	float f;

printf("Size of a char: %lu bytes\n", sizeof(unsigned long));
printf("Size of an  int: %lu bytes\n", sizeof(unsigned long));
printf("Size of a long int: %lu bytes\n", sizeof(unsigned long));
printf("Size of a long long int: %lu byte\n", sizeof(unsigned long));
printf("Size of a float: %lu byte\n", sizeof(unsigned long));
return 0;
}

