#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,count;
	char s[1000];
	
	printf("Enter the string- ");
	gets(s);
	
	printf("%s\n",s);
	

for(i=48; i<=57; i++)
{
	count =0;
	
	for(j=0; j<strlen(s); j++)
	{
		if(s[j]==i)
		{
			count++;
		}
	}
	
	printf("%d ",count);
}
	
	
	
	
}
