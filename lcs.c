#include<stdio.h>
#include<string.h>
int main()
{
	char a[5000],b[5000];
	if(scanf("%s%s",a,b));
	int l,m,i,j;
	int max=0;
	l=strlen(a);
	m=strlen(b);
	int num[l][m];
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (a[i] != b[j])
				num[i][j] = 0;
			else
			{
				if ((i == 0) || (j == 0))
					num[i][j] = 1;
				else
					num[i][j] = 1 + num[i - 1][j - 1];
				if(num[i][j]>max)
					num[i][j]=max;
				
			}
			
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	printf("%d",max);
	return 0;
}
