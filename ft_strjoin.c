#include <stdio.h>
#include<stdlib.h>
#include "libft.h"
#include <stddef.h>
char *ft_strjoin(char const *s1, char const *s2)
{
    char *join;
    int s1_len;
    int s2_len;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    if(!s1 && !s2)
      return (NULL);
    else if(!s1)
       return (ft_strdup(s2));
    else if(!s2)
      return (ft_strdup(s1));
    join = (char *)malloc(s1_len + s2_len + 1);
    if (!join)
     return (NULL);
    ft_strlcpy(join, s1, s1_len + 1);
    ft_strlcat(join, s2, s1_len + s2_len + 1);
    return (join); 
}
int main()
{
    char s1[]= "jfugwe7f";
    char s2[] = "Chokri";
    char *joining = ft_strjoin(s1,s2);
    printf("%s",joining);
}