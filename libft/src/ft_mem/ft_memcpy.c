/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhadhri <fhadhri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 07:53:50 by fhadhri           #+#    #+#             */
/*   Updated: 2022/05/12 14:26:30 by fhadhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char const	*str;
	char		*dd;

	str = (const char *)src;
	dd = (char *)dest;
	while (n--)
	{
		dd[n] = str[n];
	}
	return (dd);
}
