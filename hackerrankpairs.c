#include<stdio.h>
#include<math.h>
#define ll long long int
void main()
{
	ll n,k,i,j;
	if(scanf("%lld%lld",&n,&k));
	ll a[n],dp[n];
	for(i=0;i<n;i++)
	{
		if(scanf("%lld",&a[i]));
		dp[i]=0;
	}
	for(i=1;i<n;i++)
	{
		dp[i]=dp[i-1];
		for(j=0;j<i;j++)
		{
			if((a[i]-a[j]) == k || a[j]-a[i] == k)
				dp[i]++;		
		}
	}
	printf("%lld\n",dp[n-1]);
}
