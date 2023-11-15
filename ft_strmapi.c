/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <sel-jadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:04:05 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/11/12 18:40:43 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*api;

	i = 0;
	if (!str || !f)
		return (0);
	api = malloc(ft_strlen(str) + 1);
	if (!api)
		return (NULL);
	while (str[i])
	{
		api[i] = f(i, str[i]);
		i++;
	}
	api[i] = '\0';
	return (api);
}
