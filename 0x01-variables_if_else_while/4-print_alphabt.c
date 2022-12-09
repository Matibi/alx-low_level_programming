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
	{
		if (letter == 'e' || letter == 'q')
			continue;
		putchar(letter);
	}
	putchar(10);
	
	return (0);
}
