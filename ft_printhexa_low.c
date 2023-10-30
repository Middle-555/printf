/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:17:10 by kpourcel          #+#    #+#             */
/*   Updated: 2023/10/30 16:51:39 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa_low(int nb)
{
	char	*tab;

	tab = "0123456789abcdef";
	if (nb <= 16)
		ft_putchar(tab[nb % 16]);
	else if (nb < 0)
	{
		ft_putchar ('-');
		ft_printhexa_low (nb * (-1));
	}
	else
	{
		ft_printhexa_low (nb / 16);
		ft_printhexa_low (nb % 16);
	}
}
