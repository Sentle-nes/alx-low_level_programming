#include <stdio.h>

/** 
 * main - prints "size of various types on the computer is compiled on and run on.."
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n" sizeof(long int));
	printf("Size of long long int: %zu bytes(s)\n" sizeof(long long int));
	printf("Size of a float %zu byte(s)\n", sizeof(float));
	return (0);

}
