/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:57:49 by meskrabe          #+#    #+#             */
/*   Updated: 2024/02/17 18:21:49 by meskrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		i = 0;
		while (str[i] == to_find[i])
		{
			if (!to_find[i +1])
				return (str);
			i++;
		}
		str++;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	char str[] = "oue le big test";
	char to_find[] = "big";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
