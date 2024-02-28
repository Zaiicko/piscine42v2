/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:46:12 by meskrabe          #+#    #+#             */
/*   Updated: 2024/02/17 18:21:04 by meskrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	dif;

	i = 0;
	dif = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
	printf("%d", ft_strncmp(s1, s2, 2));
	return(0);
}*/
