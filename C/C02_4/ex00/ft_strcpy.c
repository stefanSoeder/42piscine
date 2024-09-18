/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:35:34 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/29 19:55:36 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int 	main(void)
{
	char	x[] = "Hola";
	char	y[] = "Adios";
	char	*a;
	char	*b;
	a = x;
	b = y;

	printf("Antes de copy %s y %s",x,y);
	ft_strcpy(a, b);
	printf("Después  de copy %s y %s",x,y);
}*/

int	main(int argc, char **argv)
{
	if (argc == 3)
	printf("%s", ft_strcpy(argv[1], argv[2]));
	else
	write(1, "NULL", 4);
}
