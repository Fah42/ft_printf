/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhadhri <fhadhri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:18:28 by fhadhri           #+#    #+#             */
/*   Updated: 2022/05/21 11:01:11 by fhadhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	char	c = '1';

	printf("%i" ,ft_isalpha(c));
	return (0);
}
*/