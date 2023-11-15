/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:31:02 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/11/02 15:28:06 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	l;

	l = count * size;
	if (count != 0 && size != l / count)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
