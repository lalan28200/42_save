/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:12:23 by apellegr          #+#    #+#             */
/*   Updated: 2015/11/23 16:12:28 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*scpy;

	len = ft_strlen(s1) + 1;
	if ((scpy = (char *)malloc(len)) == NULL)
		return (NULL);
	ft_memcpy(scpy, s1, len);
	return (scpy);
}
