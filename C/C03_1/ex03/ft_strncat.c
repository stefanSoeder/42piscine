/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:40:21 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/28 17:57:47 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	l;
	unsigned int	i;

	l = 0;
	i = 0;
	while (dest[l])
		l++;
	while ((src[i] != '\0') && (i < nb))
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = 0;
	return (dest);
}

/*int   main(void)
{
        char    a[] = "hola";
        char    b[] = "adios";
	unsigned int c = 2;
*/
