/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:18:11 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/26 17:10:10 by stemarti         ###   ########.fr       */
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

/*int	main(int argc, char **argv)
{
	//char x[]= "o/lLabcdefghijklmnopqrstuvwxyz";
	
//	ft_strupcase(x);
	if (argc>100)
		return (0);
	printf("%s",ft_strupcase(argv[1]));
}*/
