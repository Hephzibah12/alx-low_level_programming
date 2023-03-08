#include <stdio.h>

/* function calls itself */
void printstring(char *str)
{
	printf("%s\n",str);
}
	int main()
{
	printstring("Hello, world!");
	return 0;
}
