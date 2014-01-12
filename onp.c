#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[300],c=0,st[400];
		int i=0,j=0,k=0;
		while(k!=-1)
		{
			scanf("%c",&c);
			if(c=='(' || c=='+' || c=='-' || c=='*' || c=='/' || c=='^')
				a[i++]=c;
			else if(c==')')
			{
				st[j++]=a[--i];
				i--;
				if(i==0)
					k=-1;
			}
			else
				st[j++]=c;
		}
		st[j]='\0';
		for(j=0;st[j]!='\0';j++)
			printf("%c",st[j]);
	}
	return 0;
}
