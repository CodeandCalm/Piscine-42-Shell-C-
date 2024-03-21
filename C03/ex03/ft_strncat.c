/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:02:23 by tstacul           #+#    #+#             */
/*   Updated: 2024/02/29 18:16:54 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*temp != '\0')
	{
		temp++;
	}
	while (nb > 0 && *src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
		nb--;
	}
	*temp = '\0';
	return (dest);
}
/*
int main()
{
    char dest[20] = "Hola ";
    char src[] = "Mundo!";
    unsigned int n = 16;

    ft_strncat(dest, src, n);
	write(1, dest, 20);
	return 0;
}*/
