/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned_decimal.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:08:08 by kpourcel          #+#    #+#             */
/*   Updated: 2023/10/27 12:08:00 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printunsigned_decimal(unsigned int nb)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_printunsigned_decimal (nb / 10);
		ft_printunsigned_decimal (nb % 10);
	}
}
