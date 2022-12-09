#include <stdio.h>

/**
* main - This is the main function
* Description: Prints out the alphabet in lowercase followed by a new line
* Return: The function returns 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
