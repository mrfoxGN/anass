#include <stdio.h>
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    unsigned int i;
    i = 0;
    if(n == 0)
    {
        return(0);
    }
    while(str1[i] && str2[i] && str1[i] == str2[i] && i < n - 1)
    {
        i++;
    }
    return(str1[i] - str2[i]);
}
/*int main()
{
    char b[]= "anas8";
    char c[]= "anass";
    printf("%d",ft_strncmp(b,c,5));
}*/
