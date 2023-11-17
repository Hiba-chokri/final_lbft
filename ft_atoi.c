#include<stdio.h>
int atoi(const char *nptr)
{
    int	i;
	int	sign;
	int	res;
	long numb;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t')
		i++;
	if (nptr[i] == '-')
    {
        sign *= -1;
		i++;
    }
    if (nptr[i] == '+')
       i++;
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		res *= 10;
		res += nptr[i] - '0';
		i++;
	}
	return (res * sign);
}