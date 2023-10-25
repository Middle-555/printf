/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:23:33 by kpourcel          #+#    #+#             */
/*   Updated: 2023/10/25 17:26:04 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printhexa_upper(int nb)
{
	char	*tab;

	tab = "0123456789ABCDEF";
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
		ft_printhexa_upper (nb * (-1));
	}
	else
	{
		ft_printhexa_upper (nb / 16);
		ft_printhexa_upper (nb % 16);
	}
}
