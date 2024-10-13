#include <stdio.h>

char *ft_strstr (char *str_1, char *to_find)
{
    int i;
    int j;

    i = 0;
    if(to_find[0] == '\0')
    {
        return(str_1);
    }
    while(str_1[i])
    {
        j = 0;
        while(str_1[i + j] == to_find[j] && str_1[i + j])
        {
            j++;
        }
        if(to_find[j] == '\0')
        {
            return(str_1 + i);
        }
        i++;
    }
    return(NULL);
}
/*int main()
{
    char b[] = "zefiiirefanasszhiuz";
    char c[] = "iir";
    char *a = ft_strstr(b,c);
    printf("%s",a);
}*/
