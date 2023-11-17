#include<stdio.h>
#include "libft.h"
#include<stdlib.h>

int ft_length(int n)
{
    int len;

    len = 0;
    if (n <= 0)
    {
      len++;
      n = (-n);
    }
   
    while (n != 0)
    {
      n = n / 10;
      len++;
    }
    return (len);
}

char *ft_itoa(int n)
{
    int sign;
    long nbr;
    char *str;
    int len;

    nbr = n;
    sign = 1;
    len = ft_length(n);
    str = (char *)malloc(len + 1);
    if (!str)
      return (NULL);
    str[len--] = '\0';
    if (n == 0)
      return  ft_strdup("0");
    if (nbr < 0)
    {
        sign *= -1;
        nbr = nbr * (-1);
        str[0] = '-';
    }
    while(nbr != 0)
    {
            str[len--] = '0' + (nbr % 10);
            nbr = nbr / 10;
    }
    return (str);
}

int main()
{
    int n = -2147483648;
    char *result = ft_itoa(n);
    
    if (result)
    {
        printf("%s\n", result);
    }
    
    return 0;
}