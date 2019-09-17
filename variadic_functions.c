#include<stdio.h>
#include<stdarg.h>

int add(int args,...)
{
	va_list ap;
	va_start(ap,args);
	
	int i=0;
	int sum=0;
	
	for(i=0;i<args;i++)
	{
		sum+=va_arg(ap, int);
	}
	va_end(ap);
	return sum;
}

int main()
{
	printf("ADD1- %d\n",add(3,1,2,3));
	printf("ADD2- %d",add(5,10,20,30,40,50));
	return 0;
}
