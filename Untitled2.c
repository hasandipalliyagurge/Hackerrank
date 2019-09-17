#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char s[100];
	printf("Enter the sentence- ");
	gets(s);
	
	
for(i=0; i<strlen(s); i++)
{
    if(s[i]==' ')
    {
        printf("\n");
    }
    else
    {
        printf("%c",s[i]);
    }
}
    return 0;
}


