/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tderubei <tderubei@intra.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:27:29 by tderubei          #+#    #+#             */
/*   Updated: 2021/09/23 10:41:52 by tderubei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		len;

	if (dest == src || !n)
		return (dest);
	len = 0;
	while (len < n)
	{
		*((char *)dest + len) = *((char *)src + len);
		len++;
	}
	return (dest);
}