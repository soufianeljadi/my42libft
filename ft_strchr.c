/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:35:00 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/11/02 15:29:51 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	a = c;
	i = -1;
	while (s[++i])
		if (s[i] == a)
			return ((char *)s + i);
	if (s[i] == a)
		return ((char *)s + i);
	return (0);
}
