/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontija <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 15:50:09 by jmontija          #+#    #+#             */
/*   Updated: 2015/12/12 15:50:11 by jmontija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char const *cpy;

	cpy = ft_strnew(len);
	i = 0;
	if (cpy)
		return (ft_memcpy(cpy, s + start, len));
	else
		return (NULL);
		return (NULL);
}
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;

	result = ft_strnew(len);
	if (s && result && ft_strlen(s) >= len)
		ft_strncpy(result, s + start, len);
	return (result);
}
