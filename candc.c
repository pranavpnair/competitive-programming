#include<stdio.h>
#include<math.h>
long long int dp[101][101];

long long int f(long long int n,long long int a[])
{
	return a[0]+a[1]*n+a[2]*n*n+a[3]*n*n*n; 
}

long long int fact( long long int p)
{
 long long int facts = 1;
 int i;
 for( i = 1; i<= p; i++)
  facts = facts * i;
 return( facts);
}
 
long long int ncr( long long int n, long long int r)
{
 return( fact( n) / (fact( r) * fact(n- r) ) ) ;
}
 
int main()
{
	long long int t,i,j,a[4],n;
	scanf("%lld",&t);
	while(t--)
	{
		for(i=0;i<4;i++)
			scanf("%lld",&a[i]);
		scanf("%lld",&n);
		dp[0][0]=0;
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=n;j++)
			{
				if(j>i)
					dp[i][j]=dp[i][j-1];
				else if(i%j==0)
					dp[i][j]=dp[i-j][j-1]*f(j,a)+ncr(i+f(i,a)-1,f(i,a));
				else
					dp[i][j]=dp[i-j][j-1]*f(j,a);
			}
		}
		printf("%lld",dp[n][n]%1000000007);
	}	
	return 0;
}
