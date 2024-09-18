/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:51:10 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/29 19:30:34 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
 	char a[] = "Hola";
	ft_putstr(a);
}*/

int	main(int argc, char **argv)
{
	if (argc <= 2)
	ft_putstr(argv[1]);
	else
	write(1, "NULL", 4);
}
