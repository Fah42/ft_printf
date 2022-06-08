/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhadhri <fhadhri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:07:39 by fhadhri           #+#    #+#             */
/*   Updated: 2022/06/08 18:26:58 by fhadhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"
#include "libft.h"

int	ft_printint(int n)
{
	char	*dest;
	int		i;

	i = 0;
	dest = ft_itoa(n);
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	free(dest);
	return (i);
}
