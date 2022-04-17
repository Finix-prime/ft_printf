/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmethira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:29:58 by pmethira          #+#    #+#             */
/*   Updated: 2022/04/17 15:39:56 by pmethira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_un(unsigned int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr_un(-nb);
	}
	else
	{
		ft_putnbr_un(nb / 10);
		ft_putnbr_un(nb % 10);
	}
}

int	num_count_un(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i++;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}
