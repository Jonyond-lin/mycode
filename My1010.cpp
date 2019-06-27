#include <stdio.h>

int search(int *a,int num,int fig){
	int i,place=0;
	bool flag=false;
	for (i = 0; i < num; ++i)
	{
		if (*(a+i)==fig)
		{
			place=i+1;
			flag=true;
			break;
		}
	}
	if(flag==false){
        place=-1;
	}

	return place;
}

int main(int argc, char const *argv[])
{
	int num,i,fig;
	int arr[1000];
	scanf("%d",&num);
	for (i = 0; i < num; ++i)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&fig);

	printf("%d",search(arr,num,fig));


	return 0;

}
