#include<stdio.h>
int main()
{
	int t;
	char t1[5],t2[5];
	int h1,m1,h2,m2,dist;
	float c1,c2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",t1);
		scanf("%s",t2);
		scanf("%d",&dist);
		char a[2];
		a[0]=t1[0];
		a[1]=t1[1];
		h1=atoi(a);
		a[0]=t1[3];
		a[1]=t1[4];
		m1=atoi(a);
		a[0]=t2[0];
		a[1]=t2[1];
		h2=atoi(a);
		a[0]=t2[3];
		a[1]=t2[4];
		m2=atoi(a);
		c1=60*(h1-h2)+(m1-m2)+dist;
		int a1,a2;
		a1=h1*60+m1;
		a2=h2*60+m2;
		if(a2+2*dist > a1)
			c2=(float)(a1-a2)/2 + dist;
		else 
			c2=a1-a2;
		printf("%.1f%.1f\n",c1,c2);
	}
	return 0;
}
