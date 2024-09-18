/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:43:28 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/21 16:16:00 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	not_lower;

	i = 0;
	not_lower = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			not_lower++;
		}
		i++;
	}
	if (not_lower == 0)
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
	char	x[] = "auno";
	char	*a;
	int	resultado;
	
	a = x;
	resultado = ft_str_is_lowercase(a);
	printf("%d", resultado);
}*/
