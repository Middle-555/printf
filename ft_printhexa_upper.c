/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:23:33 by kpourcel          #+#    #+#             */
/*   Updated: 2023/10/27 12:07:53 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printhexa_upper(int nb)
{
	char	*tab;

	tab = "0123456789ABCDEF";
	if (nb <= 16)
		return (ft_putchar(tab[nb % 16]));
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
