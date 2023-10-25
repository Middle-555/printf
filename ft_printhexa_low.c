/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:17:10 by kpourcel          #+#    #+#             */
/*   Updated: 2023/10/25 17:21:23 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printhexa_low(int nb)
{
	char	*tab;

	tab = "0123456789abcdef";
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
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

int	main(void)
{
	unsigned int	nb;

	nb = 42;
	ft_printhexa_low(nb);
	return (0);
}
