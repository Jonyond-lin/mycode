#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i;
	char str[5][100];
	for (i = 0; i < 5; ++i)
	{
		scanf("%s",&str[i]);
	}
	int index=0;
	int max=0;
	for (i = 0; i < 5; ++i)
	{
		if (strlen(str[i])>max)
		{
			max=strlen(str[i]);
			index=i;
		}
	}
	printf("%s",str[index]);
	//puts(str[index]);



    return 0;
}
