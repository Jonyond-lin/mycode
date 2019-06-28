#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delete_char(char str[],char target){
	int i,j;
	for(i=j=0;str[i]!='\0';i++){
		if(str[i]!=target){
			str[j++]=str[i];
		}
	}
	str[j]='\0';
}

int main()
{
	char str[100000];
	char copy[1000];
	char c;
	//scanf("%s",str);
	gets(str);
	scanf("%c",&c);
	/*int i,index=0;
	for (i = 0; i < strlen(str); ++i)
	{
		if (str[i]!=c)
		{
			copy[index]=str[i];
			index++;
		}
	}
	for (i = 0; i <= index; i++)
	{
		//putchar(copy[i]);
		printf("%c",copy[i]);
	}*/

	delete_char(str,c);
	puts(str);

	//puts(copy);
	return 0;
}
