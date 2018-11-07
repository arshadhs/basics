// Copy input to output, replace string of 1 or more blanks with single blank
#include<stdio.h>

int main()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			while((c == getchar()) == ' ');
		}
	}
	return 0;
}
