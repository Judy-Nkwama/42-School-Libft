/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 07:43:53 by junkwama          #+#    #+#             */
/*   Updated: 2023/05/09 10:23:16 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		len;
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	len = ft_strlen(s);
	if (c == '\0')
		return ((void *)(str + len));
	while (str[i] != '\0' && (i < n))
	{
		if (str[i] == c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
