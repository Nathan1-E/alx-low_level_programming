#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
int sum = 0, i;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
int b;
char *str;

str = argv[i];
for (b = 0; b < str[b]; b++)
{
if (str[b] < 48 || str[b] > 57)
{
printf("Error\n");
return (1);
}

}
}
}
for (i = 1; i <= argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d", sum);
return(0);
}