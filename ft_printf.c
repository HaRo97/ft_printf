/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrochd <hrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:43:42 by hrochd            #+#    #+#             */
/*   Updated: 2024/02/24 17:24:26 by hrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_cases(const char *s, va_list args, int i)
{
	int	len;

	len = 0;
	if (s[i] == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (s[i] == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (s[i] == 'p')
		len += ft_put_address(va_arg(args, void *));
	else if (s[i] == 'd' || s[i] == 'i')
		ft_putnbr(va_arg(args, int), &len);
	else if (s[i] == 'u')
		ft_putnbr(va_arg(args, unsigned int), &len);
	else if (s[i] == 'x')
		len += ft_inttohex(va_arg(args, unsigned int), 0);
	else if (s[i] == 'X')
		len += ft_inttohex(va_arg(args, unsigned int), 1);
	else
		len += ft_putchar(s[i]);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		tmp;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] != '\0')
				((1 == 1) && (tmp = len), len += ft_printf_cases(s, args, i++));
		}
		else
		{
			tmp = len;
			len += ft_putchar(s[i++]);
		}
		if (tmp == len + 1)
			return (va_end(args), -1);
	}
	return (va_end(args), len);
}
