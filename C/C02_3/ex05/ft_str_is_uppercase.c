/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:26:37 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/21 16:45:15 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	not_uppercase;

	i = 0;
	not_uppercase = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			not_uppercase++;
		}
		i++;
	}
	if (not_uppercase == 0 || i == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int	main(void)
{
	char	x[] = "";
	char	*a;
	int	resultado;

	a = x;
	resultado = ft_str_is_uppercase(a);
	printf("%d", resultado);
}*/
