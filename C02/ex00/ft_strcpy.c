/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:44:43 by meskrabe          #+#    #+#             */
/*   Updated: 2024/02/11 14:44:46 by meskrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>

int	main()
{
	char src[] = "test";
	char dest[100];
	
	printf("dest avant fonc: %s\n", dest);
	ft_strcpy(dest, src);
	printf("dest apr fonc: %s", dest);
	return (0);
}*/
