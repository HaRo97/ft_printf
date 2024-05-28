/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrochd <hrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:43:14 by hrochd            #+#    #+#             */
/*   Updated: 2024/02/23 15:32:06 by hrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_address(void *address)
{
	unsigned long	a;

	a = (unsigned long)address;
	if (a == 0)
	{
		if (ft_putstr("0x0") == -1)
			return (-1);
		return (3);
	}
	else
	{
		if (ft_putstr("0x") == -1)
			return (-1);
		return (2 + ft_inttohex(a, 0));
	}
}
