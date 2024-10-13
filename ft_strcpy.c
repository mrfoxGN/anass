#include <stdio.h>

char* ft_strcpy(char* dest, const char* src)
{
    int i;

    i = 0;
    while(src[i] && dest[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
/*int main()
{
    char b[] = "anass";
    char f[] = "anasgoo";
    char *c;
    c = ft_strcpy(b,f);
    printf("%s",c);
}*/