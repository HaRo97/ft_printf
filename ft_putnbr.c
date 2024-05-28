/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrochd <hrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:24:43 by hrochd            #+#    #+#             */
/*   Updated: 2024/02/24 14:13:05 by hrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long n, int *len)
{
	if (n < 0)
	{
		if (write(1, "-", 1) == -1)
		{
			(*len = -1);
			return ;
		}
		(*len)++;
		ft_putnbr(-n, len);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, len);
		ft_putnbr(n % 10, len);
	}
	else
	{
		if (ft_putchar(n + 48) == -1)
		{
			(*len = -1);
			return ;
		}
		(*len)++;
	}
}
