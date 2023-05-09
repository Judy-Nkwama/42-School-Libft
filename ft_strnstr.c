/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:38:11 by junkwama          #+#    #+#             */
/*   Updated: 2023/05/09 13:42:46 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_h;
	size_t	len_n;
	char	*h;
	char	*n;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	len_h = ft_strlen(haystack);
	len_n = ft_strlen(needle);
	if (*needle == '\0')
		return (h);
	while (i < len && (len_h - i >= len_n))
	{
		if (ft_memcmp(h, n, len_n) == 0)
			return (h);
		i++;
		h++;
	}
	return (NULL);
}
