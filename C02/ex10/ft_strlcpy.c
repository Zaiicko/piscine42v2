/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 23:00:39 by meskrabe          #+#    #+#             */
/*   Updated: 2024/02/12 23:26:05 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	return (i);
}
/*#include <stdio.h>
int	main()
{
	char src[] = "testestest";
	char dest[] = "dfsdjfkdsjkfjsdkgdfgfdgdfgdgfj";
	printf("%d | %s", ft_strlcpy(dest, src, 15), dest);
}*/
