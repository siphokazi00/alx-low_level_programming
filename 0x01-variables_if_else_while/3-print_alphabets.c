#include <stdio.h>
/**
 * main - entry point
 *
 * return: always 0 (success)
 */

int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(c);
			d++;
		}
	putchar('\n');
	return (0);
}
