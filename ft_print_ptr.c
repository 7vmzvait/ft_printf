/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitaabe <haitaabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:24:57 by haitaabe          #+#    #+#             */
/*   Updated: 2024/11/30 20:36:06 by haitaabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lkmala_ta3ptr(unsigned long va)
{
	int		print_count;
	char	*str_hex;

	print_count = 0;
	str_hex = "0123456789abcdef";
	if (va >= 16)
		print_count += ft_lkmala_ta3ptr(va / 16);
	print_count += ft_putchar(str_hex[va % 16]);
	return (print_count);
}

int	ft_print_ptr(unsigned long ptr)
{
	int	print_count;

	print_count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	print_count += write(1, "0x", 2);
	print_count += ft_lkmala_ta3ptr(ptr);
	return (print_count);
}
