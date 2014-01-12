#include<stdio.h>
#define p printf(
main()
{
	int i=0,a;
	while(++i!=101)
	{
		a=(i%3==0&&i%5==0)?:1:(a=i%3==0?:2:(a=i%5==0?3:4));
		if(a==4)
			p"%d",i);
		if(a==3)
			p"Buzz");
		if(a==2)
			p"Fizz");
		else
			p"FizzBuzz");
		p"\n");
	}
}
