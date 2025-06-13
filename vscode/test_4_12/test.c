#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void Print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	char str[] = { 0 };
	void (*p)(char*) = Print;
	(*p)("hello bit !!");
	
	return 0;
}