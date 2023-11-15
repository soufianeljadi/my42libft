/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:30:40 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/11/08 20:02:37 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			s;
	long int	r;
	long int	x;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		s = 44 - str[i++];
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = r * 10 + (str[i++] - 48);
		if (r > x && s == 1)
			return (-1); 
		else if (r > x && s == -1)
			return (0); 
		r = x;
	}
	return (r * s);
}
