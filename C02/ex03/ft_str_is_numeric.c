/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:23:08 by tstacul           #+#    #+#             */
/*   Updated: 2024/02/26 16:24:20 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 48) && (str[i] <= 57)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <studio.h>
int	main(void)

{
	char	*str;

	str = "555555555555555555555555555555555555555555555";
	printf("%d", ft_str_is_numeric(str));
	return (0);
}*/
