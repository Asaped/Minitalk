/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moturki <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:17:07 by moturki           #+#    #+#             */
/*   Updated: 2023/11/17 22:29:50 by moturki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_list3
{
	size_t	tl;
	va_list	args;
}				t_list3;

int		ft_printf(const char *format, ...);

t_list3	ft_traitement(t_list3 info, char c);

t_list3	ft_traitement_char(t_list3 info);

t_list3	ft_traitement_string(t_list3 info);

t_list3	ft_traitement_int(t_list3 info, char c);

t_list3	ft_traitement_unsigned(t_list3 info, char c);

t_list3	ft_traitement_ptr(t_list3 info, char c);

t_list3	ft_traitement_hexa(t_list3 info, char c);

int		ft_putnbr_base(long long int nb, unsigned int base, char c, int count);

size_t	ft_count_size(long long int nb, unsigned int base, char c);

#endif
