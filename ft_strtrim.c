/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiglett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:29:21 by sdiglett          #+#    #+#             */
/*   Updated: 2021/11/03 22:30:01 by sdiglett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	char	*str;

	if (!s1)
		return (0);
	beg = 0;
	end = ft_strlen(s1);
	while (s1[beg] && ft_strchr(set, (int)s1[beg]) != 0)
		beg++;
	while (end > beg && ft_strchr(set, (int)s1[end]) != 0)
		end--;
	str = ft_substr(s1, beg, (end - beg) + 1);
	if (!str)
		return (0);
	return (str);
}
