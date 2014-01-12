#include<stdio.h>

int main()
{
   int testcases;
   scanf("%d",&testcases);
   int e,f,g,i,j,n;
   while(testcases--)
   {
        scanf("%d%d",&e,&f);
        g=f-e;
        scanf("%d",&n);
        int p[n+1],w[n+1];
        int a[n+1][g+1];
        for(i=1;i<n+1;i++)
        {
            scanf("%d%d",&p[i],&w[i]);
            a[i][0]=0;
        }
        for(i=0;i<=g;i++)
            a[0][i]=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=g;j++)
            {
                a[i][j]=a[i-1][j];
                if(j>=w[i] && a[i][j]>a[i-1][j-w[i]]+p[i])
                    a[i][j]=a[i-1][j-w[i]]+p[i];
            }
        }
        for(i=0;i<n;i++)
        printf("%d ",a[i][g]);
   		printf("\n");
   }
   return 0;
}
