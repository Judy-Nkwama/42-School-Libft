/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:01:45 by junkwama          #+#    #+#             */
/*   Updated: 2023/05/09 11:30:18 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		d;
	char	*_s1;
	char	*_s2;

	_s1 = (char *)s1;
	_s2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (_s1[i] == '\0' && _s2[i] == '\0' && i < n)
			return (0);
		d = (unsigned char)_s1[i] - (unsigned char)_s2[i];
		if (d != 0)
			return (d);
		i++;
	}
	return (0);
}
