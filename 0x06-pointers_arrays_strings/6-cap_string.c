#include "main.h"
/**
* cap_string - a function that capitalizes
* all the words of a string.
* @s: pointer to a string
* Return: char
*/
char *cap_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '.' || s[i - 1] == '"')
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
if (s[i - 1] == '\n' || s[i - 1] == '\t' || s[i - 1] == ';')
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
if (s[i - 1] == ',' || s[i - 1] == '!' || s[i - 1] == '?')
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
if (s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
i++;
}
return (s);
}
