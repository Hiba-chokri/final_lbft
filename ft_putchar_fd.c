/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:21:07 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/17 15:20:32 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}

// #include <fcntl.h>

// int main()
// {
// 	int fd = open("file1", O_RDWR | O_CREAT);
// 	ft_putchar_fd('X', fd);
// 	close (fd);

// }