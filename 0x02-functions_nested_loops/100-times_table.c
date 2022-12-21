#include "main.h"
/**
 * print_times_table - prints n times table stating with zero
 * @n: input parameter
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				if ((i * j) < 10)
				{
					if (j < n)
					{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(i * j + '0');
						_putchar(','); }
					else
					{
						_putchar(i * j + '0');
						_putchar(','); } }
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(i * j + '0'); } }
				else
				{
					if ((i * j) / 10 < 10)
					{
					if (j < n)
					{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(((i * j) / 10) % 10 + '0');
						_putchar((i * j) % 10 + '0');
						_putchar(','); }
					else
					{
						_putchar(((i * j) / 10) % 10 + '0');
						_putchar((i * j) % 10 + '0');
						_putchar(','); } }
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(((i * j) / 10) % 10 + '0');
						_putchar((i * j) % 10 + '0'); } }
					else
					{
					if ((i * j) / 100 < 10)
					{
					if (j < n)
					{
						_putchar(' ');
						_putchar((i * j) / 100 + '0');
						_putchar(((i * j) / 10) % 10 + '0');
						_putchar((i * j) % 10 + '0');
						_putchar(','); }
					else
					{
						_putchar(' ');
						_putchar((i * j) / 100 + '0');
						_putchar(((i * j) / 10) % 10 + '0');
						_putchar((i * j) % 10 + '0'); } } } } }
		_putchar('\n'); } }
	else
	{
		_putchar('\n'); }
}
