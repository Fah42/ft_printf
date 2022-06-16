/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhadhri <fhadhri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:17:21 by fhadhri           #+#    #+#             */
/*   Updated: 2022/06/15 18:47:21 by fhadhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlent(long nb)
{
	int		i;

	i = 0;
	if (nb == 0)
	{
		i++;
		return (i);
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned long n)
{
	char	*dest;
	int		i;
	long	nn;

	nn = n;
	i = ft_intlent(nn);
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!(dest))
		return (NULL);
	dest[i--] = '\0';
	if (nn == 0)
		dest[0] = 48;
	while (nn > 0)
	{
		dest[i] = 48 + (nn % 10);
		nn = nn / 10;
		i--;
	}
	return (dest);
}
