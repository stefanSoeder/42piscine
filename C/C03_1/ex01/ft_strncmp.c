/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:53:28 by stemarti          #+#    #+#             */
/*   Updated: 2024/08/26 17:47:51 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

/*int	main(void)
{
	char	*a;
	char	*b;
	char	*c;
	char	*d;
	char	*f;
	unsigned int	g;

	a = "AAA";
	b = "CCC";
	c = "AAA";
	d = "AAAA";
	f = "AAAD";
	g = 2;
	
	printf("%d negativo\n",ft_strncmp(a,b,g));
	printf("%d cero\n",ft_strncmp(a,c,g));
	printf("%d positivo\n",ft_strncmp(b,c,g));
	printf("%d cero\n",ft_strncmp(d,f,g));
}*/
