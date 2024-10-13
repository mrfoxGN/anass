#include <stdio.h>

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    int i;

    i = 0;
    while(dest[i] && src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return(dest);
}
int main()
{
    char b[]="anl";
    char c[]="ana7s";
    char *x = strncpy(b,c,3);
    printf("%s",x);
}