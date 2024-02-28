/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:28:52 by meskrabe          #+#    #+#             */
/*   Updated: 2024/02/10 16:28:53 by meskrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swp;

	i = 0;
	while (i < size)
	{
		swp = tab[(size - 1)];
		tab[(size - 1)] = tab[i];
		tab[i] = swp;
		size--;
		i++;
	}
}
/*#include <stdio.h>

int main()
{
	int i = 0;
	int tab[] = {7, 6, 6};
	int size = 3;

	ft_rev_int_tab(tab, size);

	while (i < size) 
	{
		printf("%d", tab[i]);
		i++;
	}
	return(0);
}*/
