/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:58:11 by junkwama          #+#    #+#             */
/*   Updated: 2023/05/10 13:10:49 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*m;
	int		tot_s;

	tot_s = size * count;
	m = malloc(tot_s);
	if (!m)
		return (NULL);
	ft_bzero(m, tot_s);
	return (m);
}
