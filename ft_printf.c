/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:25:10 by kpourcel          #+#    #+#             */
/*   Updated: 2023/10/30 17:11:02 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char format_type, va_list args)
{
	int		count;

	count = 0;
	if (format_type == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format_type == 's')
		count += ft_putstr(va_arg(args, int));
	else if (format_type == 'p')
		count += ft_printadresse(va_arg(args, unsigned long int));
	else if (format_type == 'x')
		count += ft_printhexa_low(va_arg(args, int));
	else if (format_type == 'X')
		count += ft_printhexa_upper(va_arg(args, int));
	else if (format_type == 'd')
		count += ft_putnbr2(va_arg(args, int));
	else if (format_type == 'i')
		count += ft_putnbr2(va_arg(args, int));
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
