/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tderubei <tderubei@intra.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:50:29 by tderubei          #+#    #+#             */
/*   Updated: 2021/09/23 11:06:14 by tderubei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && c != *str)
		str++;
	if (c == *str)
		return ((char *)str);
	return (0);
}