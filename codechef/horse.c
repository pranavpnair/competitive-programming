# include<stdio.h>
# define cal(p,i,j) if(i<n&&i>=0&&j>=0&&j<n&&p<pals[i][j]) p=pals[i][j];
char input[1001][1001];
int pals[1001][1001];
int n;
 
/*void cal(int *pal,int i,int j)
{
if(i>=0&&i<n&&j>=0&&j<n&&*pal<pals[i][j])
*pal=pals[i][j];
}*/
int capt(void)
{ 
	int i,j;
	for(j=n-1;j>=0;--j)
		for(i=n-1;i>=0;--i)
		{
			cal(pals[i][j],i-2,j+1);
			cal(pals[i][j],i+2,j+1);
			cal(pals[i][j],i-1,j+2);
			cal(pals[i][j],i+1,j+2);
			if(input[i][j]=='P')
				pals[i][j]++;
			else if(input[i][j]=='K')
				return pals[i][j];
		}
}

int main()
{
	int i,j,t;
	scanf("%d",&j);
	while(j--)
	{
		scanf("%d",&n);
		for(i=0;i<n;++i)
			for(t=0;t<n;++t)
				pals[i][t]=0;
		for(i=0;i<n;++i)
			scanf("%s",&input[i][0]);
		printf("%d\n",capt());
	}
	return 0;
}
