#include <stdio.h>

/**
 * main - print all possible combination
 *
 * Return: 0
 */
int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 < 9; digit1++)
{
	putchar(digit1 % 10) + '0');
	putchar(digit2 % 10) + '0');

	if (digit1 == 8 && digit2== 9)
		continue;

	putchar(',');
	putchar(' ');

	return (0);

}
