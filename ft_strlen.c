/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tderubei <tderubei@intra.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:35:22 by tderubei          #+#    #+#             */
/*   Updated: 2021/09/23 10:41:52 by tderubei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	size_t		ft_strlen(const char *str)
	{
		int		len;
	
		len = 0;
		while (str[len])
			len++;
		return (len);
	}
