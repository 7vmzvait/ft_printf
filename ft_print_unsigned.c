/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitaabe <haitaabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:25:04 by haitaabe          #+#    #+#             */
/*   Updated: 2024/11/30 20:25:07 by haitaabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	int	print_count;

	print_count = 0;
	if (nb > 9)
		print_count += ft_print_unsigned(nb / 10);
	print_count += ft_putchar(((nb % 10) + '0'));
	return (print_count);
}
