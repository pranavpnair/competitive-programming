#include<stdio.h>

unsigned long long C(unsigned long long int n,unsigned long long int r) 
{
    if(r > n / 2)
    	r = n - r; // because C(n, r) == C(n, n - r)
    unsigned long long ans = 1;
    unsigned long long i;
    for(i = 1; i <= r; i++)
    {
        ans *= n - r + i;
        ans /= i;
    }
    //product of k consecutive nos. is always divisible by k!
    return ans;
}

int main()
{
   unsigned long long n, r;
   unsigned long long t;
   scanf("%llu",&t);
   while(t--)
   {
   	   scanf("%llu%llu",&n,&r);
   	   if(r<=n/2)
 	   	printf("%llu\n",C(n-1,r-1));
 	   else
 	   printf("%llu\n",C(n-1,n-r));
   }
   return 0;
}
 

