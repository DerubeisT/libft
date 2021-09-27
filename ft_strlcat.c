/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tderubei <tderubei@intra.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:24:30 by tderubei          #+#    #+#             */
/*   Updated: 2021/09/23 19:23:37 by tderubei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		len;
	size_t		src_len;
	size_t		value;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(src) + ft_strlen(dest);
	idx = 0;
	while (dest[len] != '\0')
		len++;
	src_len = 0;
	while (src[src_len] != '\0' && len + 1 < size)
	{
		dest[len] = src[src_len];
		src_len++;
		len++;
	}
	dest[len] = '\0';
	return (value);
}
