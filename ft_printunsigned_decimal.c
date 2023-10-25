/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned_decimal.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:08:08 by kpourcel          #+#    #+#             */
/*   Updated: 2023/10/25 11:35:11 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printunsigned_decimal(unsigned int nb)
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

int	main()
{
    for	(unsigned int i = 0; i <= 20; i++)
    {
        ft_printunsigned_decimal(i);
        ft_putchar('\n');
    }

    // Test avec un grand nombre
    ft_printunsigned_decimal(4294967295);  // Le plus grand unsigned int
    ft_putchar('\n');

    return 0;
}

