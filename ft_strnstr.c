/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:36:27 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/10/31 15:05:56 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)s;
	if (to_find[j] == 0)
		return (str);
	if (str == NULL && len == 0)
		return (NULL);
	while (str[i] != '\0' && i < len)
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && (i + j) < len)
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
