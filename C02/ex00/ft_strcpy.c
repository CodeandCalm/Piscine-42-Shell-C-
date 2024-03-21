/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <stacul@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:17:54 by tstacul           #+#    #+#             */
/*   Updated: 2024/02/26 16:17:36 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest [a] = '\0';
	return (dest);
}

/*int main ()
{
	char src[] = "Hello world!";
	char dest [15];

	ft_strcpy( dest, src);
	printf("cadena a copiar: %s\n", dest);

	return 0;
}
*/
