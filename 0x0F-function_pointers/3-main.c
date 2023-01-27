#include "3-calc.h"
/**
 * main - program that performs a simple operation
 * @argc: number of command line argument
 * @argv: array of command line argument
 *
 * Return: Always 0 (success)
 *
 */

int main(int argc, char *argv[])
{
	int arg1, arg3;
	char op;
	int result;
	int (*func)(int, int);

	op = *argv[2];
	func = get_op_func(argv[2]);

	arg1 = atoi(argv[1]);
	arg3 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((op == '/' || op == '%') && arg3 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (func)
	{
		result = func(arg1, arg3);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}
