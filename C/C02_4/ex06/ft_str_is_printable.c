/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:48:42 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/21 17:17:12 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	not_printable;

	i = 0;
	not_printable = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			not_printable++;
		}
		i++;
	}
	if (not_printable == 0 || i == 0)
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
	char	resultado;
	
	a = x;
	resultado = ft_str_is_printable(a);
	printf("%d", resultado);
}*/
