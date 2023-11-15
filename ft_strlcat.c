/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:35:28 by sel-jadi          #+#    #+#             */
/*   Updated: 2023/10/31 14:56:41 by sel-jadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = -1;
	if ((!dstsize && !dst) || !dstsize)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len > dstsize)
		return (src_len + dstsize);
	while (src[++i] && i + dst_len < dstsize - 1)
		dst[i + dst_len] = src[i];
	dst[i + dst_len] = '\0';
	return (dst_len + src_len);
}
