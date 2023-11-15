/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:36:38 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/11/02 15:30:49 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	a = c;
	i = ft_strlen(s) + 1;
	while (--i >= 0)
		if (s[i] == a)
			return ((char *)s + i);
	return (0);
}
