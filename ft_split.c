/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:58:21 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/11/06 16:37:19 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counter(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i] != '\0')
			counter++;
		while (s[i] != c && s[i])
			i++;
	}
	return (counter);
}

static void	*is_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free (str[i]);
		i++;
	}
	free (str);
	return (NULL);
}

static void	ft_skip(char const *str, size_t *start, size_t *end, char c)
{
	while (str[*start] == c)
		*start = *start + 1;
	*end = *start;
	while (str[*end] != c && str[*end] != 0)
		*end = *end + 1;
}

char	**ft_split(char const *str, char c)
{
	char	**str_split;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!str)
		return (NULL);
	str_split = (char **)malloc((counter(str, c) + 1) * sizeof(char *));
	if (!str_split)
		return (0);
	start = 0;
	i = -1;
	while (++i < counter(str, c))
	{
		ft_skip(str, &start, &end, c);
		str_split[i] = ft_substr(str, start, end - start);
		if (!str_split[i])
			return (is_free(str_split));
		start = end;
	}
	str_split[i] = NULL;
	return (str_split);
}
