#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0(Success)
 *
 *Description: This program prints the alphabet in lowercase
 */

int main(void)
{
char ch;

for(ch = 'a'; ch <= 'z'; ch++);
 {
   putchar(ch);
 }
putchar('\n');

return (0);
}
