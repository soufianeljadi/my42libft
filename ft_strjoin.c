/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:48:21 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/11/02 22:56:08 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		new[len + i] = s2[i];
		i++;
	}
	new[len + i] = '\0';
	return (new);
}
