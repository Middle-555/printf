/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:35:38 by kpourcel          #+#    #+#             */
/*   Updated: 2023/10/27 12:08:43 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
/*					Fonction utile 							*/
int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putstr(char *src);
int		ft_putnbr(int nb);
int		ft_printunsigned_decimal(unsigned int nb);
int		ft_printhexa_low(int nb);
int		ft_printhexa_upper(int nb);

#endif