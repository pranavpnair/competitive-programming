#include<stdio.h>

inline long long int s(long long int n)
{
	long long int t,sum=0;
	while(n>0)
	{
		t=n%10;
		if(t%2==0)
			sum+=t*2;
		else
			sum+=t;
		n=n/10;
	}
	return sum;
}

inline long long int d(long long int n)
{
	return n%10;
}

int main()
{
	int t;
	long long int x,a,r,b,i,sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%lld%lld",&a,&b);
		for(i=a;i<=b;i++)
		{
			if(i>a && i%10==((i-1)%10)+1 && i%2==0 )
			{	
				x+=(i%10)*2-((i-1)%10);
				r=x%10;
			}
			else if(i>a && i%10==((i-1)%10)+1 && i%2!=0)
			{
				x+=i%10 - ((i-1)%10)*2;
				r=x%10;
			}
			else
			{
				x=s(i);	
				r=d(x);
			}
			sum+=r;	
		}
		printf("%lld\n",sum);
	}
	return 0;
}
//tle...
