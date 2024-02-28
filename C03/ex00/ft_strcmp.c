/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:47:20 by meskrabe          #+#    #+#             */
/*   Updated: 2024/02/17 18:20:50 by meskrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	dif;

	i = 0;
	dif = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			dif = s1[i] - s2[i];
			return (dif);
		}
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char	s1[] = "test";
	char	s2[] = "tart";
	printf("%d", ft_strcmp(s1, s2));
	return(0);
}*/
