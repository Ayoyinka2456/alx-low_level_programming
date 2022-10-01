#include "main.h"

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argunent vector which is an array of strings
 * Return: 0 is success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
