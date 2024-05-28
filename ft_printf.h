/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrochd <hrochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:12:52 by hrochd            #+#    #+#             */
/*   Updated: 2024/02/23 15:34:50 by hrochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_inttohex(unsigned long num, int uppercase);
int		ft_printf(const char *s, ...);
int		ft_put_address(void *address);
int		ft_putchar(int c);
void	ft_putnbr(long n, int *len);
int		ft_putstr(char *s);

#endif