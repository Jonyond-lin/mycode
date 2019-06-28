#include<stdio.h>
void swap(int a,int b,char arr[])
{
	char temp=arr[a];
	arr[a]=arr[b];
	arr[b]=temp;
}
int fun(int start,int mid,int end,char arr[])
{
	if(start==mid)
	{
		return 0;
	}
	else
	{
		swap(start,end-start-1,arr);
		puts(arr);
		fun(start+1,mid,end,arr);
	}
}
int main()
{
	int n;
	char a[1000];
	char arr[1000];
	scanf("%d%s",&n,arr);
	fun(0,n/2,n,arr);
	printf("\n");
	puts(arr);
	return 0;
}
