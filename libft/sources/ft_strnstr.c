/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:58:27 by zsyyida           #+#    #+#             */
/*   Updated: 2022/10/08 14:04:49 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	n_len;

	if (*n == '\0')
		return ((char *)h);
	n_len = ft_strlen(n);
	while (*h != '\0' && len-- >= n_len)
	{
		if (ft_strncmp(h, n, n_len) == 0 && *h == *n)
			return ((char *)h);
		h++;
	}
	return (0);
}
