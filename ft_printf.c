/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:25:10 by kpourcel          #+#    #+#             */
/*   Updated: 2023/10/28 12:48:25 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_format(char format_type, va_list args)
{
	int		count;

	count = 0;
	if (format_type == 'c')
		ft_putchar(va_arg(args, char));
	else if (format_type == 's')
		ft_putstr(va_arg(args, char));
	else if (format_type == 'p')
		ft_printadresse(va_arg(args, unsigned long int));
}

int	ft_printf(const char *type, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, *type);
	while (*type != '\0')
	{
		if (*type == '%')
			count += ft_printmodulo(*(++type), args);
		else
			count += write(1, type, 1);
		++type;
	}
	va_end(args);
	return (count);
}
