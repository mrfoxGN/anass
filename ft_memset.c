#include <stdio.h>


void ft_memset(void *ptr,int A,size_t k)
{
	int i = 0;
	char *s;
	s = ptr;
	while( i < k)
	{
		s[i] = A;
		i++;
	}
}
int main ()
{
	int i = 0;
	char tab[10];
	ft_memset(tab,15,sizeof(tab));
	while( i < 10)
	{
		printf("%d",tab[i]);
		i++;
	}
	printf("\n\n");
	i = 0;
	ft_memset(tab,0,sizeof(tab));
        while( i < 10)
        {
                printf("%d",tab[i]);
                i++;
        }


}
