
//incomplete not working.

#include<stdio.h>
#include<math.h>


int comp(int a[],unsigned long long m,unsigned long long n)
{
    unsigned long long i,j,l,u;
    unsigned long long sqr=sqrt(n);

    for(i=0;i<n-m+1;i++)
        a[i]=1;

    for(i=2;i<=sqr;i++)
    {
        unsigned long long q=m/i;
        q=q*i;
        for(u=q+i;u<=n;u+=i)
            a[u-m]=0;
    }

    for(l=0;l<m-n+1;l++)
    {
        if(a[l]==1 && l+m!=1)
            printf("%llu\n",l+m);
    }
    printf("\n");
}


int main()
{
    int i,j,t;
    unsigned long long m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu%llu",&m,&n);
        int p[n-m+1];
        comp(p,m,n);
    }
    return 0;
}
