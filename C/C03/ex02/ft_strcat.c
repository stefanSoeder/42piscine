/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:27:38 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/28 17:55:43 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int		nl;
	int		i;

	nl = 0;
	i = 0;
	while (dest[nl] != '\0')
	{
		nl++;
	}
	while (src[i] != '\0')
	{
		dest[nl + i] = src[i];
		i++;
	}
	dest[nl + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	a[] = "hola";
	char	b[] = "adios";

	printf("%s",ft_strcat(a, b));
}*/
