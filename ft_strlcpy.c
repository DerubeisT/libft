/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tderubei <tderubei@intra.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:51:38 by tderubei          #+#    #+#             */
/*   Updated: 2021/09/22 14:33:23 by tderubei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		len;
	size_t		count;

	len = 0;
	count = 0;
	if (!dest || !src)
		return (0);
	while (src[count])
		count++;
	while (src[len] && len + 1 < size)
	{
		dest[len] = src[len];
		len++;
	}
	if (size)
		dest[len] = '\0';
	return (count);
}