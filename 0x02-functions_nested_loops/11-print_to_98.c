#include "main.h"
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: input argument
 *
 */

void print_to_98(int n)
{
	int m, i, j, l, o;

	m = 98;

	if ((n >= 0) || (n < 0))
	{
		if (n <= m)
		{
			for (i = n; i < m + 1; i++)
			{
				if (i < 10)
				{
					if (i > 0)
					{
						_putchar(i + '0');
						_putchar(',');
						_putchar(' '); }
					else
					{
					if (i >= -9)
						{
						if (i != 0){
						_putchar(45); }
						_putchar((i / -1) + '0');
						_putchar(',');
						_putchar(' '); }
					else
					{
					if ((i / -10) < 10)
					{
						_putchar(45);
						_putchar((i / -10) + '0');
						_putchar((i / -1) % 10 + '0');
						_putchar(',');
						_putchar(' '); }
					else
					{
					if ((i / -100) < 10)
					{	_putchar(45);
						_putchar((i / -100) + '0');
						_putchar((i / -10) % 10 + '0');
						_putchar((i / -1) % 10 + '0');
						_putchar(',');
						_putchar(' ');} } } } } 
				else
				{
					if (i != 98){
					_putchar((i / 10) + '0');
					_putchar(i % 10 + '0');
					_putchar(',');
					_putchar(' '); }
					else 
					{	_putchar((i / 10) + '0');
						_putchar(i % 10 + '0'); } } }
			_putchar('\n');	}
		else
		{
			for (j = n / 10; j > 10;)
			{
				for (i = n; i >= m; i--)
				{
					j = i / 10;
					l = i % 10;
					if (j < 10)
					{
					if (i != 98){
						_putchar(j + '0');
						_putchar(l + '0');
				       		_putchar(',');
						_putchar(' '); }
					else
					{	_putchar(j + '0');
						_putchar(l + '0'); } }
					else
					{
					if ((j / 10) < 10)
					{
						_putchar(j / 10  + '0');
						_putchar((i / 10) % 10 + '0');
						_putchar(l + '0');
						_putchar(',');
						_putchar(' ');
						continue; }
					else
					{
					if ((j / 100) < 10)
					{
						o = j % 10;
						_putchar(j / 100 + '0');
						_putchar((i / 100) % 10 + '0');
						_putchar(o + '0');
						_putchar(l + '0');
						_putchar(',');
						_putchar(' ');
						continue; }
					else
					{
						o = j % 10;
					if ((j / 1000) < 10)
					{
						_putchar(j / 1000 + '0');
						_putchar((j / 100) % 10 + '0');
						_putchar((i / 100) % 10 + '0');
						_putchar(o + '0');
						_putchar(l + '0');
						_putchar(',');
						_putchar(' ');
						continue; } } } } } }
			_putchar('\n'); } }
}
