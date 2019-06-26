#include <stdio.h>

int maxfig(int *a,int n)
{
	int max=0;
	int i;
	for (i = 0; i < n; ++i)
	{
		if (*(a+i)>max)
		{
			max=*(a+i);
		}
	}
	return max;
}

int minfig(int *a,int n)
{
	int max=10000;
	int i;
	for (i = 0; i < n; ++i)
	{
		if (*(a+i)<max)
		{
			max=*(a+i);
		}
	}
	return max;
}

int addup(int *a,int n)
{
	int sum=0;
	int i;
	for (i = 0; i < n; ++i)
	{
		sum+=*(a+i);
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int num,i;
	int a[10000];
	scanf("%d",&num);
	for (i = 0; i < num; ++i)
	{
		scanf("%d",&a[i]);
	}
	printf("%d\n%d\n%d\n", maxfig(a,num),minfig(a,num),addup(a,num));



}
