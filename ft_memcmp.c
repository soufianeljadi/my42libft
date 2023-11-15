/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:34:19 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/10/31 15:05:15 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char *)b1;
	a2 = (unsigned char *)b2;
	while (len)
	{
		if (*a1 != *a2)
			return (*a1 - *a2);
		a1++;
		a2++;
		len--;
	}
	return (0);
}
