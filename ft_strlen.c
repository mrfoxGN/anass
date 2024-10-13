
#include <stdio.h>
size_t ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}
int main() {
    // Write C code here
    char b[]="Try programiz.pro";
    printf("%d",ftstrlen(b));

    return 0;
}
