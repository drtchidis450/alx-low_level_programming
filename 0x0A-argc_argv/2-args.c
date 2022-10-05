#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: always 0
 */
int main(int agrc, char *agrv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
