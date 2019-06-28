#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f(int n)
{
	if (n)
	{
		f(n - 1);
		putchar('A' + n - 1);
		f(n - 1);
	}
}

int main()
{
	int N, num, i;
	scanf("%d", &N);
	f(N);
	putchar('\n');
	return 0;
}
