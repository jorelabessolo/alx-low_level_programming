#include <stdio.h>
/**
 * main-is the entry point for the program.
 *
 * Return:zero if no error, Non-zero value if errors.
 */
int main(void)
{
	printf("Size of char:%d byte(s)\n", sizeof(char));
	printf("Size of an int:%d byte(s)\n", sizeof(int));
	printf("Size of a long int:%d byte(s)\n", sizeof(long int));
	printf("Size of long long int:%d bytes(s)\n", sizeof(long long int));
	printf("Size of a float:%d bytes(s)\n", sizeof(float));
	return (0);
}
