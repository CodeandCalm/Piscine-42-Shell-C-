/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <tstacul@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:23:26 by tstacul           #+#    #+#             */
/*   Updated: 2024/02/21 23:41:49 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
/*
int main(void)
{
    char src[] = "Hello world";
    char dest[500];

    ft_strncpy(dest, src, 6);
	 printf("Cadena de destino antes de la copia: %s\n", src);
    printf("Cadena de destino después de la copia: %s\n", dest);

    return 0;
}*/
