//hackerrank

#include<stdio.h>
#include<stdlib.h>
#define llq unsigned long long

void merg(double arr[], llq l, llq m, llq r)
{
    llq i, j, k;
    double n1 = m - l + 1;
    double n2 =  r - m;

    /* create temp arrays */
    double  *L = (double*)malloc(sizeof(double)*n1);
    double *R = (double*)malloc(sizeof(double)*n2);

    /* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j <= n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back doubleo arr[l..r]*/
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
void sor(double arr[], llq l, llq r)
{
    if (l < r)
    {
        llq m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        sor(arr, l, m);
        sor(arr, m+1, r);
        merg(arr, l, m, r);
    }
}

void main()
{
	double k,p=0;
	llq i,n;
	scanf("%lld%lf",&n,&k);
	double a[n];
	for(i=0;i<n;i++)
		scanf("%lf",&a[i]);
	sor(a,0,n-1);
	for(i=0;i<n;i++)
	{
		if(p>=k)
		{
			printf("%lld\n",i-1);
			break;
		}
		p+=a[i];
	}
}
