#include<stdio.h>
#include<math.h>

float area(float a,float b,float c)
{
    float s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

void main()
{
    int t;
    float a,b,c,d,e,f;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
        float A,B,C,D,E,F;
        double V,ar;
        A=a*a;
        B=b*b;
        C=c*c;
        D=d*d;
        E=e*e;
        F=f*f;
        V = sqrt((- A*B*D - A*C*E - B*C*F - D*E*F + A*C*D + B*C*D + A*B*E + B*C*E
           + B*D*E + C*D*E + A*B*F + A*C*F + A*D*F + C*D*F + A*E*F + B*E*F
           - C*C*D - C*D*D - B*B*E - B*E*E - A*A*F - A*F*F)/144);
        ar=area(a,b,d)+area(b,c,f)+area(d,e,f)+area(a,c,e);
        printf("%.4f\n",V/(3*ar));
    }
}
