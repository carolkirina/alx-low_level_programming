#include "main.h"
/**
* leet - a function that encodes
* a string into 1337
* @s : pointer to string
* Return: char
*/
char *leet(char *s)
{
char a[] = "aeotlAEOTL";
char b[] = "4307143071";
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
}
}
}

return (s);
}
