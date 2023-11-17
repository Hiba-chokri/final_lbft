/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:28:39 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/17 12:51:07 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n = -2147483648)
    {
        ft_putchar_fd('-', fd);
        ft_putchar_fd('2', fd);
        ft_putnbr_fd(147483648, fd);
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n *= (-n);
        ft_putnbr_fd(n, fd);
    }
    if (n > 0)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
       ft_putchar_fd('0' + (n % 10), fd);
}