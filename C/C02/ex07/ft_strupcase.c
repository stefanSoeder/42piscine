/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:18:11 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/21 19:15:27 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		str[i] = str[i];
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char x[]= "o/lLabcdefghijklmnopqrstuvwxyz";
	
	ft_strupcase(x);
	printf("%s",x);
}*/
