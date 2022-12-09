#include <stdio.h>

/**
 * main - This is the main function
 * Description: It prints all single digit numbers followed by new line
 * Return: the function returns 0
 */
int main(void)
{
int a;

for (a = 0; a < 10; a++)
{
    printf("%d", a);
}
putchar('\n');

return (0);
}
