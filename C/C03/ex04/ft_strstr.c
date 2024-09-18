/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:29:31 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/28 17:46:17 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	j = 0;
	aux = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			aux = &str[i];
			while (str[i] == to_find[j])
			{
				i++;
				j++;
				if (to_find[j] == '\0')
					return (aux);
			}
			i++;
		}
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char str[] = "Hello World";
	char to_find[] = "orl";
	char not_find[] = "ar";

	printf("%s", ft_strstr(str, to_find));
	printf("%s", ft_strstr(str, not_find));
}*/
