#include <stdio.h>
/**
*main - Project entry point
*Return: 0
*Description: 'printing the alphabets in lowercase and uppercase'
*/
int main(void)
{
	int n = 97;
	int x = 65;

	while (n <= 122)
	{
	putchar(n);
	n++;
	}
	while (x <= 90)
	{
	putchar(x);
	x++;
	}
putchar('\n');
return (0);
}
