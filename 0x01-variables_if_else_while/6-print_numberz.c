#include <stdio.h>

/**
* main - This is the main function
* Description: It prints all single digit numbers followed by new line
* Return: the function returns 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}