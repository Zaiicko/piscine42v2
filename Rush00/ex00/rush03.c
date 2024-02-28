/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:04:59 by meskrabe          #+#    #+#             */
/*   Updated: 2024/02/11 17:35:30 by meskrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	if (x < 1 || y < 1)
		return ;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((l == 1 || l == y) && c == 1)
				ft_putchar('A');
			else if ((l == 1 || l == y) && c == x)
				ft_putchar('C');
			else if (c == 1 || c == x || l == 1 || l == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		l++;
		ft_putchar('\n');
	}
}
