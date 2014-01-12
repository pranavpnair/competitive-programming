//wrong approach,question different

#include<stdio.h>
#include<math.h>
void main()
{
	long long int i,j,t,n,l,d,c,w;
	scanf("%lld",&t);
	while(t--)
	{
		w=0;
		scanf("%lld%lld%lld",&n,&l,&d);
		char a[l+1];
		scanf("%s",a);
		for(i=0;i<l;i++)
		{
			if(a[i]=='0')
				c=0;
			else
				c=1;
			w+=pow(2,l-1-i)*c;
		}
		long long int dp[n][w+1];
		for(i=0;i<w+1;i++)
		{
			dp[0][i]=1;
		}
		for(i=1;i<n;i++)
		{
			dp[i][0]=1;
			dp[i][1]=1;
		}
		for(i=1;i<n;i++)
		{
			long long int o=pow(2,i);
			for(j=2;j<=w;j++)
			{
				dp[i][j]=0;
				long long int m=0;
				while((j-m*o)>=0)
				{
					dp[i][j]+=dp[i-1][j-m*o];
					m++;
				}
			}
		}
		for(i=0;i<n;i++)
			{for(j=0;j<=w;j++)
				printf("%lld ",dp[i][j]);
			printf("\n");
			}
	//	printf("%lld\n",dp[n][w+1]);
	}
}
