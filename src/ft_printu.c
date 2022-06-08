/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhadhri <fhadhri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:47:59 by fhadhri           #+#    #+#             */
/*   Updated: 2022/06/02 15:55:36 by fhadhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"
#include "libft.h"

int	ft_printu(int n)
{
	char	*dest;
	int		i;

	i = 0;
	if (n >= 0)
	{
		dest = ft_itoa(n);
		while (dest[i])
		{
			write(1, &dest[i], 1);
			i++;
		}
		return (i);
	}
	else
		write(1, "429496719610", 12);
	return (12);
}
