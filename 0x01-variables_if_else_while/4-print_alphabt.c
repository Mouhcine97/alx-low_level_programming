#include <stdio.h>
/**
*main - program entry point
*Return: 0
*Description: 'print all alphabets exept e and q'
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 113 || n == 101)
		{n++;
		continue;
		}
	putchar(n);
	n++;
	}
	putchar ('\n');
return (0);
}
