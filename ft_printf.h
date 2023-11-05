/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:35:38 by kpourcel          #+#    #+#             */
/*   Updated: 2023/11/05 12:37:21 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
/*					Fonction utile 							*/
int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putstr(char *src);
int		ft_putnbr2(int nb);
int		ft_printunsigned_decimal(unsigned int nb);
int		ft_printhexa_low(unsigned int nb);
int		ft_printhexa_upper(unsigned int nb);
int		ft_printadresse(void *adresse);
int		ft_printmodulo(char c);

#endif