#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *a ,int n)
{
	int i;
	char tmp;
	if (strlen(a)==1)
	return;
	else{
		for (i = 0; i < n/2; ++i)
		{
			tmp=*(a+i);
			*(a+i)=*(a+n-i-1);
			*(a+n-i-1)=tmp;
			puts(a);
		}
	}
	printf("\n%s",a);
}

int main()
{
	char str[10000];
	int num;
	scanf("%d %s",&num,str);
	//gets(str);
	reverse(str,num);


    return 0;
}
