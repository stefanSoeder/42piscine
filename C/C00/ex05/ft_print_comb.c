/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:32:53 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/12 17:49:43 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a='0';
	b='0';
	c='0';

	while (a<='7')
	{
		b=a+1;
		while (b <= '8')
		{ 
			c=b+1;
			while(c <= '9')
			{     	
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				write(1,", ",2);
				c++;
			}
			b++;	
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
}	
