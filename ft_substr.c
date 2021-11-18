/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiglett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:42:21 by sdiglett          #+#    #+#             */
/*   Updated: 2021/10/04 21:42:21 by sdiglett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	my_len;
	char	*c_substr;

	if (!s)
		return (NULL);
	my_len = ft_strlen(s);
	if (len > my_len)
		len = my_len;
	if (start > my_len)
		start = my_len;
	if (start + len > my_len)
		len = my_len - start;
	c_substr = (char *) malloc(sizeof(char) * (len + 1));
	if (!c_substr)
		return (NULL);
	ft_memmove(c_substr, s + start, len);
	c_substr[len] = '\0';
	return (c_substr);
}
