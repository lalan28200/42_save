/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellegr <apellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:31:01 by apellegr          #+#    #+#             */
/*   Updated: 2015/11/25 15:31:01 by apellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*tmp;
	size_t	len;

	if (s == NULL)
		return (NULL);
	tmp = (char *)s;
	while (ft_isspace(*tmp))
		tmp++;
	len = ft_strlen(tmp);
	if (len)
	{
		while (ft_isspace(tmp[--len]) || *tmp == '\0')
			;
		tmp = ft_strsub(tmp, 0, (len + 1));
	}
	else
	{
		tmp = ft_strnew(1);
	}
	return (tmp);
}
