/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhadhri <fhadhri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:03:12 by fhadhri           #+#    #+#             */
/*   Updated: 2022/06/08 11:06:13 by fhadhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
int		ft_formats(va_list args, char c);
int		ft_printchar(int c);
int		ft_printint(int n);
int		ft_printu(int n);
int		ft_printpercent(void);
int		ft_printhex(unsigned long n, char c);
int		ft_printstr(char *str);
int		ft_printaddr(unsigned long long n);
#endif