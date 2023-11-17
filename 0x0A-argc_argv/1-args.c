#include <stdio.h>

/**
* main - This prints the actual number of arguments passed into it.
* @argc: argument count
* @argv: arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
(void)argv;


printf("%d\n", argc - 1);
return (0);
}

