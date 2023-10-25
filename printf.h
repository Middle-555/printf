/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:35:38 by kpourcel          #+#    #+#             */
/*   Updated: 2023/10/25 17:24:19 by kpourcel         ###   ########.fr       */
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
void	ft_putchar(char c);
void	ft_putstr(char *src);
void	ft_putnbr(int nb);
void	ft_printunsigned_decimal(unsigned int nb);
void	ft_printhexa_low(int nb);
void	ft_printhexa_upper(int nb);

#endif