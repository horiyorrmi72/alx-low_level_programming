#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int tens;
	int ones;
	int t;
	int o;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
		  for (t = tens; t <= '9'; t++)
			{
			  for (o = ones + 1; o <= '9'; o++)
			    {
			      putchar(tens);
			      putchar(ones);
			      putchar(' ');
			      putchar(t);
			      putchar(o);
			      
			      if (!((tens == '9' && ones == '8') &&
				    (t == '9' && o == '9')))
				{
				  putchar(',');
				  putchar(' ');
				}
			    }
			  o = '0';
			}
		}
	}
	putchar('\n');
	
	return (0);
}
