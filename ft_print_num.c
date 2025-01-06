/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitaabe <haitaabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:24:50 by haitaabe          #+#    #+#             */
/*   Updated: 2024/11/30 20:44:24 by haitaabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_num(int nb)
{
	int	print_count;

	print_count = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb > 9)
		print_count += ft_print_num((nb / 10));
	if (nb < 0)
	{
		nb = -nb;
		print_count += ft_putchar('-');
		print_count += ft_print_num(nb);
	}
	else
		print_count += ft_putchar(nb % 10 + '0');
	return (print_count);
}
