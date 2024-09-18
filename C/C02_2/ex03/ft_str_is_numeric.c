/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:59:06 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/26 17:08:55 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main (void)
{
	
	char	x[] = "12345";
	char	y[] = "12t45";
	char	z[] = "";
	char	*a;
	char	*b;
	char	*c;

	a = x;
	b = y;
	c = z;

	printf("%d", ft_str_is_numeric(a));
	printf("%d", ft_str_is_numeric(b));
	printf("%d", ft_str_is_numeric(c));
}*/
