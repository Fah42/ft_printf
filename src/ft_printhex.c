/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhadhri <fhadhri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:07:17 by fhadhri           #+#    #+#             */
/*   Updated: 2022/06/08 14:15:55 by fhadhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"
#include "libft.h"

int	ft_hex_lenght(unsigned long n)
{
	int	lenght;

	lenght = 0;
	while (n != 0)
	{
		lenght++;
		n /= 16;
	}
	return (lenght);
}

void	ft_put_hex(unsigned long n, char c)
{
	if (n >= 16)
	{
		ft_put_hex(n / 16, c);
		ft_put_hex(n % 16, c);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
		{
			if (c == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (c == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
	}
}

int	ft_printhex(unsigned long n, char c)
{
	ft_put_hex(n, c);
	return (ft_hex_lenght(n));
}
