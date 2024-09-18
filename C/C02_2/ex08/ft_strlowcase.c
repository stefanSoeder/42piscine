/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:04:40 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/26 17:15:53 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		str[i] = str[i];
		i++;
	}
	return (str);
}

/*int   main(void)
{
        char x[]= "o/AFSGDDHJLHJHLRTHJÑOHDTJDÑOijklmnopqrstuvwxyz";
        
        printf("%s",ft_strlowcase(x));
}*/
