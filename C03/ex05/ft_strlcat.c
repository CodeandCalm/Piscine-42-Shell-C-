/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:44:17 by tstacul           #+#    #+#             */
/*   Updated: 2024/02/29 19:00:08 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unitsd.h>

unsigned int	ft_strcat(char	*dest, char	*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	int				len_src;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	len = 0;
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	len = i;
	while (src[i - len] && i + 1 < size)
	{
		dest[i] = src [i - len];
		i++;
	}
	if (len < size)
		dest[i] = '\0';
	len += len_src;
	return (len);
}
