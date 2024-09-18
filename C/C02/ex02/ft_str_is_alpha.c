/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:46:37 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/22 17:36:30 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *src)
{
	int	num;
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (!(src[i] >= 'A' && src[i] <= 'Z' || src[i] >= 'a' && src[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char *a;
	char *b;
	char *c;

	a = "hoLa";
	b = "h1l3";
	c = "";


	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	printf("%d\n", ft_str_is_alpha(c));
}*/
