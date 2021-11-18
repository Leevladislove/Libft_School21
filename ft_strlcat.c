/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiglett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:42:21 by sdiglett          #+#    #+#             */
/*   Updated: 2021/10/04 21:42:21 by sdiglett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (dst[i] && i < size)
		i++;
	len = ft_strlen(src) + i;
	if (i < size)
	{
		while (i < size - 1 && *src)
			dst[i++] = *src++;
		dst[i] = '\0';
	}
	return (len);
}
