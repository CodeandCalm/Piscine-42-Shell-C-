/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:18:23 by tstacul           #+#    #+#             */
/*   Updated: 2024/02/29 20:16:39 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcat(char	*dest, char	*src)
{
	char	*temp;

	temp = dest;
	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}
