/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:23:39 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/11/03 22:25:05 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	int		start;
	int		end;
	char	*ptr;

	start = 0;
	if (s == NULL)
		return (NULL);
	if (s[0] == '\0')
		return (ft_strdup(""));
	if (set == NULL)
		return (ft_strdup(s));
	while (ft_strchr(set, s[start]) && s[start])
		start++;
	end = ft_strlen(s);
	while (ft_strchr(set, s[end]) && end != 0)
		end--;
	if (end < start)
		return (ft_strdup(""));
	ptr = ft_substr(s, start, end - start + 1);
	return (ptr);
}
