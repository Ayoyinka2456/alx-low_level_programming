#include "main.h"

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argunent vector which is an array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
