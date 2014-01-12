#include<stdio.h>

int max(int a,int b)
{
	if(b>=a)
		return b;
	else
		return a;
}

int main()
{
	int t,r,i,j;
	long long int mx,a[101][101],dp[101][101];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&r);
		for(i=1;i<=r;i++)
		{
			a[0][i]=0;
			for(j=1;j<=i;j++)
				scanf("%lld",&a[i][j]);
		}
		dp[0][0]=0;
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=i;j++)
			{
				dp[i][j]=max(dp[i-1][j-1]+a[i][j],dp[i-1][j]+a[i][j]);
			}
		}
		mx=dp[r][1];
		for(i=2;i<=r;i++)
			if(mx<dp[r][i])
				mx=dp[r][i];
		printf("%lld\n",mx);
	}
	return 0;
}
