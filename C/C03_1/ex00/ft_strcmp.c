/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:58:03 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/26 17:46:27 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

/*int	main(void)
{
	char	x[]= "AAAA";
	char	y[]= "AAAA";
	char	z[]= "ZZZZ";
	char	*a;
	char	*b;
	char	*c;

	a = x;
	b = y;
	c = z;
	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", ft_strcmp(a, c));
	printf("%d\n", ft_strcmp(c, b));
}*/
