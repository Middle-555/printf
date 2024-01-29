/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:30:50 by kpourcel          #+#    #+#             */
/*   Updated: 2023/11/09 11:35:06 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int ret1;
    int ret2;

    ret1 = ft_printf("Caractère : %c\n", 'A');
    ret2 = printf("Caractère : %c\n", 'A');
    printf("Retour ft_printf: %d, Retour printf: %d\n\n", ret1, ret2);

    ret1 = ft_printf("Chaîne : %s\n", "Hello, world!");
    ret2 = printf("Chaîne : %s\n", "Hello, world!");
    printf("Retour ft_printf: %d, Retour printf: %d\n\n", ret1, ret2);

    ret1 = ft_printf("Adresse : %p\n", &ret1);
    ret2 = printf("Adresse : %p\n", &ret1);
    printf("Retour ft_printf: %d, Retour printf: %d\n\n", ret1, ret2);

    ret1 = ft_printf("Hexa (minuscule) : %x\n", 0);
    ret2 = printf("Hexa (minuscule) : %x\n", 0);
    printf("Retour ft_printf: %d, Retour printf: %d\n\n", ret1, ret2);

    ret1 = ft_printf("Hexa (majuscule) : %X\n", 0);
    ret2 = printf("Hexa (majuscule) : %X\n", 0);
    printf("Retour ft_printf: %d, Retour printf: %d\n\n", ret1, ret2);

    ret1 = ft_printf("Entier signé : %d\n", 0);
    ret2 = printf("Entier signé : %d\n", 0);
    printf("Retour ft_printf: %d, Retour printf: %d\n\n", ret1, ret2);

    ret1 = ft_printf("Entier signé : %u\n", -1);
    ret2 = printf("Entier signé : %u\n", -1);
    printf("Retour ft_printf: %u, Retour printf: %u\n\n", ret1, ret2);

    ret1 = ft_printf(" Le pourcentage est de %d. %%\n", 42);
    ret2= printf(" Le pourcentage est de %d. %%\n", 42);
    printf("Retour ft_printf: %d%%, Retour printf: %d%%\n\n", ret1, ret2);
    
    return (0);
}

