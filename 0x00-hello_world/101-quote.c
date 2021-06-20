#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return:1
 */
int main(void)
{
char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(2, ch, sizeof(ch));
return (1);
}
