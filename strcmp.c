#include <stdio.h>

int strcmp(char *dest,char *src)
{
    int i = 0;
    while(dest[i] && src[i] && src[i] == dest[i])
    {
        i++;
    }
    return(dest[i] - src[i]);
}
int main()
{
    char b[]="ananass";
    char c[]="ananas";
    printf("%d",strcmp(b,c));
}