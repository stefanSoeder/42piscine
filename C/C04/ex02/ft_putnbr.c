/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:11:25 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/29 19:16:01 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	num_str;

	num_str = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	num_str = (nb % 10) + '0';
	write(1, &num_str, 1);
}

/*int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(2147483648);
}*/

int	main(int argc, char **argv)
{
	if(argc < 2)
	ft_putnbr(argv[1]);
	else
	write(1, "NULL", 4);
}
