/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmontija <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 13:35:59 by jmontija          #+#    #+#             */
/*   Updated: 2015/12/11 13:36:01 by jmontija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i; 
	unsigned char *dest_tmp;
	unsigned char *src_tmp;

	dest_tmp = (unsigned char *)dest;
	src_tmp  = (unsigned char *)src;
	i = 0;

	while (i < n)
	{
		dest_tmp[i] = src_tmp[i]; 
		i++;
	}

	return (dest);
}

/*int main(void)
{
	const char src[] = "Hellos";
	char dst[50];

	printf("%s\n", ft_memcpy(dst, src, 6));
	return (0);
}*/