/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:57:39 by meskrabe          #+#    #+#             */
/*   Updated: 2024/02/27 16:06:28 by meskrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*#include <stdio.h>

int	main()
{
	int	min = -5;
	int	max = 5;
	int	*result = ft_range(min, max);
		int	i;

		i = 0;
		while (i < max - min)
		{
			printf("%d ", result[i]);
			i++;
		}
		free(result);
	return (0);
}*/
