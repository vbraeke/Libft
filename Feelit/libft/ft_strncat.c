/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontija <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 17:11:29 by jmontija          #+#    #+#             */
/*   Updated: 2015/12/12 17:11:31 by jmontija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(s1);
	if (s1 && s2)
	{
		while (i < n && s2[i] != '\0')
		{
			s1[len + i] = s2[i];
			i++;
		}
		s1[len + i] = '\0';
		return (s1);
	}
	return(NULL);
}