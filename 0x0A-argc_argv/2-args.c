#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints its name
 * If you rename a program, it will pirnt the new name
 * To compile it again
 *
 * @argc: arguments count
 *
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
