/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitaabe <haitaabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:24:24 by haitaabe          #+#    #+#             */
/*   Updated: 2024/11/30 20:44:20 by haitaabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(char c, unsigned int va)
{
	char	*str_hex;
	int		print_count;

	str_hex = "0123456789abcdef";
	print_count = 0;
	if (c == 'X')
		str_hex = "0123456789ABCDEF";
	if (va >= 16)
		print_count += ft_print_hex(c, (va / 16));
	print_count += ft_putchar(str_hex[va % 16]);
	return (print_count);
}
