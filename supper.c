#include<stdio.h>
#include<stdlib.h>


void merg(long int arr[], long int l, long int m, long int r)
{
    long int i, j, k;
    long int n1 = m - l + 1;
    long int n2 =  r - m;

    /* create temp arrays */
    long int *L = (long int*)malloc(sizeof(long int)*n1);
    long int *R = (long int*)malloc(sizeof(long int)*n2);

    /* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j <= n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back long into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the sub-array
  of arr to be sorted */
void sor(long int arr[], long int l, long int r)
{
    if (l < r)
    {
        long int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        sor(arr, l, m);
        sor(arr, m+1, r);
        merg(arr, l, m, r);
    }
}



void rev(long int a[],long int l,long int s[],long int i,long int v[],long int t[])
{
	if(v[i]==1)
		return;
	t[i]=a[i];
	v[i]=1;
	long int j;
    for(j=0;j<i;j++)
 	{
    	if(s[j]==l-1 && a[j]<a[i] && v[i]!=1 )
        	rev(a,s[j],s,j,v,t);
    }
}


void main()
{
	long int n,i,j,q=10;
	while(q--)
	{
		scanf("%ld",&n);
		long int l,a[n],s[n],v[n],t[n];
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
			s[i]=1;
			v[i]=0;
			t[i]=0;
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(a[i]>a[j] && s[j]+1>=s[i])
					s[i]=s[j]+1;
			}
		}
		l=s[0];
		for(i=0;i<n;i++)
            if(l < s[i])
                l=s[i];    
        for(i=0;i<n;i++)
        	if(l==s[i])
      			rev(a,l,s,i,v,t);
        sor(t,0,n-1);
        for(i=0;i<n;i++)
        	if(t[i]!=0)
        		printf("%ld ",t[i]);
        	
	}
}
