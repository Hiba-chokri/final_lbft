#include <stdio.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    i;
    unsigned int    j;
    char       *substr;
    size_t      str_len;

    if (!s)
        return (NULL);
    i = 0;
    str_len = ft_strlen(s);
    if (start > str_len)
    {
        return (0);
    }
    if (start + len > str_len)
        len = str_len - start;
    substr = (char *)malloc(len + 1);

    if (!substr)
        return (NULL);
    i = start;
    j = 0;
    while (j < len && s[start + j] != '\0')
    {
        substr[j] = s[i];
        i++;
        j++;
    }
    substr[j] = '\0';

    return (substr);
}
/*
int main()
{
    char s[] ="";
    //printf("%s",s);
    char *sub = ft_substr(s,30,2);
    printf("%s",sub);
    return (0);
}*/