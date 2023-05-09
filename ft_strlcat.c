/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 02:58:37 by junkwama          #+#    #+#             */
/*   Updated: 2023/05/09 07:03:57 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dstlen;

	if (!src && !dest)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	dstlen = ft_strlen(dest);
	if (size <= dstlen)
		return (ft_strlen(src) + size);
	ft_strlcpy((dest + dstlen), src, (size - dstlen));
	return (dstlen + ft_strlen(src));
}
