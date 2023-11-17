#include<stdio.h>
void ft_bzero(void *s, size_t n)
{
    unsigned char *s1;
    size_t i;
    i = 0;
    s1 = (unsigned char *)s;
    while (i < n)
    {
        s1[i] = 0;
        i++;
    }
}
/*
int main()
{
    int n = 4;
    int arr[n];
    ft_bzero(arr,sizeof(arr));
    int i=0;
    while(i < n)
    {
        printf("%d\n",arr[i]);
        i++;
    }
}*/