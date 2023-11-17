
#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
    void *ptr;

// maybe calloc doesnt check this
    if (!nmemb || !size)
       return (NULL);
    ptr = malloc(sizeof(void *) * size);
    if (!ptr)
      return (NULL);
    ft_memset(ptr,0,nmemb * size);
    return (ptr);
}
/*
int main()
{
    int *arr;
    int i = 0;
    int n_elem = 5;
    int size=sizeof(int);
    arr = (int *)calloc(n_elem,size);
    if (arr != NULL)
    {
        while (i < n_elem)
        {
            printf("arr[%d]= %d\n",i,arr[i]);
            i++;
        }
        free(arr);
    }
}*/