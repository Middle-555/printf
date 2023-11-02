/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadresse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:41:54 by kpourcel          #+#    #+#             */
/*   Updated: 2023/11/01 12:52:38 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printadresse(void *adresse)
{
	int		count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_printhexa_low((unsigned long)adresse);
	return (count);
}
