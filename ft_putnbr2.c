/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:33:48 by kpourcel          #+#    #+#             */
/*   Updated: 2023/11/02 11:42:57 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr2(int nb)
{
	int		count;

	count = 0;
	if (nb == -2147483648)
	{
		count += write(1, "-2147483648", 11);
		return (count);
	}
	if (nb >= 0 && nb <= 9)
	{
		count += ft_putchar(nb + '0');
	}
	else if (nb < 0)
	{
		count += ft_putchar ('-');
		count += ft_putnbr2 (nb * (-1));
	}
	else
	{
		count += ft_putnbr2 (nb / 10);
		count += ft_putnbr2 (nb % 10);
	}
	return (count);
}
