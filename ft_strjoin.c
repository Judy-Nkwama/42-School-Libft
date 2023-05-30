/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 03:19:49 by junkwama          #+#    #+#             */
/*   Updated: 2023/05/30 08:59:10 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3 = malloc(sizeof(char) * ((int)(s1_len + s2_len + 1)));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, s1_len + 1);
	ft_strlcpy(s3 + s1_len, s2, s2_len + 1);
	return (s3);
}
