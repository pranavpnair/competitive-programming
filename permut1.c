//accepted
#include<stdio.h>
void main()
{
	int d,i,j;
	scanf("%d",&d);
	while(d--)
	{
		int n,k,m;
		scanf("%d%d",&n,&k);
		int dp[n+1][k+1];
		int a[n+1];
		for(i=0;i<=k;i++)
		{
			dp[1][i]=0;
			dp[0][i]=0;
		}
		for(i=1;i<=n;i++)
			dp[i][0]=1;
		for(i=2;i<=n;i++)
		{
			for(j=1;j<=k;j++)
			{
				dp[i][j]=0;
				m=0;
				while(m!=i && j-m>=0)
				{
					dp[i][j]+=dp[i-1][j-m];
					m++;
				}
			}
		}	
		printf("%d\n",dp[n][k]);
	}
}
