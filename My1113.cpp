#include <stdio.h>

void sectotime(int num)
{
	int h,m,s;
	s=num%60;
	m=((num-s)/60)%60;
	h=num/3600;
	if (h<10)
	{
		printf("0%d:", h);
	}else{
		printf("%d:", h);
	}
	if (m<10)
	{
		printf("0%d:", m);
	}else{
		printf("%d:", m);
	}
	if (s<10)
	{
		printf("0%d", s);
	}else{
		printf("%d", s);
	}
	printf("\n");
}


int main(int argc, char const *argv[])
{
	int pairs,i;
	int num[1000000];
	scanf("%d",&pairs);
	for (i = 0; i < pairs; ++i)
	{
		scanf("%d",&num[i]);
	}

	for (i = 0; i < pairs; ++i)
	{
		sectotime(num[i]);
	}
	return 0;

}
