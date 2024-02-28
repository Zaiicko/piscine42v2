/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:21:26 by meskrabe          #+#    #+#             */
/*   Updated: 2024/02/08 12:33:54 by meskrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	f;
	int	d;

	f = 0;
	while (f <= 98)
	{
		d = f + 1;
		while (d <= 99)
		{
			ft_putchar((f / 10) + '0');
			ft_putchar((f % 10) + '0');
			ft_putchar(' ');
			ft_putchar((d / 10) + '0');
			ft_putchar((d % 10) + '0');
			if (f != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d++;
		}
		f++;
	}
}
