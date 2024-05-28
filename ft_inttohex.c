/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inttohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrochd <hrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:00:42 by hrochd            #+#    #+#             */
/*   Updated: 2024/02/23 15:29:12 by hrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_toupper(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
}

int	zero_hex_case(int c)
{
	if (ft_putchar(c) == -1)
		return (-1);
	return (1);
}

int	ft_inttohex(unsigned long num, int uppercase)
{
	char	hex[20];
	char	*base;
	int		i;
	int		len;

	i = 0;
	base = "0123456789abcdef";
	if (num == 0)
		return (zero_hex_case(base[0]));
	while (num > 0)
	{
		hex[i] = base[num % 16];
		num = num / 16;
		i++;
	}
	len = i;
	if (uppercase)
		ft_toupper(hex);
	while (--i >= 0)
	{
		if (ft_putchar(hex[i]) == -1)
			return (-1);
	}
	return (len);
}
