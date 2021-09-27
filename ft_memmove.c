/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tderubei <tderubei@intra.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:35:45 by tderubei          #+#    #+#             */
/*   Updated: 2021/09/23 10:41:52 by tderubei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t t;

	t = 0;
	while (t < len)
	{
		((unsigned char *)b)[t] = c;
		i++;
	}
	return (b);
}
