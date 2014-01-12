#include<stdio.h>
int main()
{
	long long int i,n=1,flag;
	while(n!=0)
	{
		flag=0;
		scanf("%lld",&n);
		if(n==0)
			break;
		int a[n+1];
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(i=1;i<=n;i++)
		{	if(a[a[i]]!=i)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("ambiguous\n");
		else
			printf("not ambiguous\n");
	}
}
