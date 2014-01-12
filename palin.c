#include<stdio.h>
#include<string.h>

void main()
{
    int t;
    long long int q,i;
    char s[1000000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        q=strlen(s);
        for(i=q-1;i>q/2;i--){
        if(s[i]>s[q-1-i])
         {
            s[i]=s[q-i-1];
            s[i-1]++;
         }
        else
            s[i]=s[q-1-i];
        }
    if (q%2 == 0)
    {
        t=(s[q/2-1]>s[q/2])?s[q/2-1]:s[q/2];
        s[q/2-1]=t;
        s[q/2]=t;
    }
    printf("%s",s);
    }
}
