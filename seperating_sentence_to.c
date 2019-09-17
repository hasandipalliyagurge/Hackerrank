#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int i;
    char *s;
    s = malloc(1024 * sizeof(char));
    printf("Enter the sentence- ");
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.

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


