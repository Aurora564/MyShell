#include<stdio.h>
#include<string.h>

static char buff[256];
char *string;

int main(void)
{
	int i,n;
	char c;

	printf("Please input a string:");
	gets(string);
	printf("\nYour string is: %s\n",string);
	n=strlen(string);

	for(i = 1; i <= n/2; ++i)
	{
		c = string[i];
		string[i] = string[n-i];
		string[n-i] = c;
	}

	printf("\nAfter conversion, the string is:%s\n",string);

	return 0;
}
