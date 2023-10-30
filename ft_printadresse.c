/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadresse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:41:54 by kpourcel          #+#    #+#             */
/*   Updated: 2023/10/30 17:09:48 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printadresse(void *adresse)
{
	ft_putstr("0x");
	ft_printhexa_low((unsigned long)adresse);
	return (write(1, &adresse, 1));
}
