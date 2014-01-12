//incomplete

#include<stdio.h>
#define swap(x,y) a=b+a-(b=a);
int main()
{
	int t;
	unsigned long a,b,c,num,flag;
	scanf("%d",&t);
	while(t--)
	{
		num=1;
		flag=0;
		scanf("%lu%lu%lu",&a,&b,&c);
		if(c>a && c>b)
		{
			printf("-1\n");
			continue;
		}
		if(a<b)
			swap(a,b);
		
	}
	return 0;
}
