#include<stdio.h>
/**
 * main - A program that displqys alphabet except q and e
 * Return: 0 (Success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
if (i != "q" && i != "e")
{
putchar(alp[i]);
}
putchar('\n');
}
return (0);
}
