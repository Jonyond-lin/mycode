#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num,i,a,b,c,aa,bb,cc;
	int flag;
	scanf("%d",&num);
	int cnt=0;

	for (i = 0; i < num; ++i)
	{
	    flag=1;
		a=i;
		b=i+1;
		c=i+2;
		while(a!=0||b!=0||c!=0)
		{
			aa=a%10;
			bb=b%10;
			cc=c%10;
			if (aa+bb+cc>=10)
			{
				flag=0;
				//cnt++;
				break;
			}
			a=a/10;
			b=b/10;
			c=c/10;

		}
		if (flag==1)
			cnt++;
	}

	printf("%d", cnt);



	return 0;

}
