/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhadhri <fhadhri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:47:59 by fhadhri           #+#    #+#             */
/*   Updated: 2022/06/15 18:19:12 by fhadhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printu(unsigned int n)
{
	char	*dest;
	int		i;

	i = 0;
	dest = ft_utoa(n);
	i += write(1, dest, ft_strlen(dest));
	free(dest);
	return (i);
}
