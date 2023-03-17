#include<stdio.h>
/**
 * main - A program that displays alhabet in lowercase using putchar
 * Return: 0 (Success)
 */
int main(void)
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0, i < 26, i++)
{
	putchar(alph[i]);
}
putchar('\n');
return (0);
}
