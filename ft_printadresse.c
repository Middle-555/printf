/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadresse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:41:54 by kpourcel          #+#    #+#             */
/*   Updated: 2023/10/27 15:46:51 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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

int	ft_printadresse(void *adresse)
{
	ft_putstr("0x");
	ft_printhexa_low((unsigned long)adresse);
	return (write(1, &adresse, 1));
}

int	main(void)
{
	int	a;

	a = 42;
	ft_printadresse(&a);
}
