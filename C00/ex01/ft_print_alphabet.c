/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <tstacul@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:59:46 by tstacul           #+#    #+#             */
/*   Updated: 2024/02/10 13:30:26 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	first_letter;

	first_letter = 'a';
	while (first_letter <= 'z')
	{
		write(1, &first_letter, 1);
		first_letter ++;
	}
}
