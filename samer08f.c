#include<stdio.h>
int main()
{
	long long int n=1;
	while(n!=0)
	{
		scanf("%lld",&n);
		if(n!=0)
			printf("%lld\n",(n*(n+1)*(2*n+1))/6);
	}	
	return 0;
}
