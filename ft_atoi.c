#include <stdio.h>
int ft_atoi(char *str)
{
    int s;
    int i;
    int r;
    i = 0;
    s = 1;
    r = 0;
    while((str[i] >= 9 && str[i] <= 15) || str[i] == 32)
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-' )
        {
            s = s * (-1);
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + (str[i] - 48);
        i++;
    }
    return(s * r);
}
/*int main()
{
    char b[]="--454545";
    printf("%d",ft_atoi(b));
}*/