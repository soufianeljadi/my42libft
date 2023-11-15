/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:34:45 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/11/02 15:31:16 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*lastd;
	const char	*lasts;

	s = src;
	d = dest;
	if (d == NULL && s == NULL)
		return (dest);
	if (s > d)
		while (n--)
			*d++ = *s++;
	else
	{
		lastd = d + (n - 1);
		lasts = s + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
