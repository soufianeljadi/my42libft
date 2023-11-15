/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:36:12 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/10/31 15:03:33 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*t1;
	unsigned char	*t2;

	i = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while ((t1[i] || t2[i]) && i < n)
	{
		if (t1[i] > t2[i])
			return (1);
		else if (t1[i] < t2[i])
			return (-1);
		i++;
	}
	return (0);
}
