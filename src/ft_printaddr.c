/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhadhri <fhadhri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:02:28 by fhadhri           #+#    #+#             */
/*   Updated: 2022/06/08 18:33:22 by fhadhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int	ft_addr_lenght(unsigned long long n)
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

void	ft_put_addr(unsigned long long n)
{
	if (n >= 16)
	{
		ft_put_addr(n / 16);
		ft_put_addr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_printaddr(unsigned long n)
{
	int	addr_lenght;

	addr_lenght = 0;
	addr_lenght += write(1, "0x", 2);
	ft_put_addr(n);
	addr_lenght += ft_addr_lenght(n);
	return (addr_lenght);
}
