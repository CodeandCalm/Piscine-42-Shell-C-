/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fft_sort_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstacul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:11:45 by tstacul           #+#    #+#             */
/*   Updated: 2024/02/19 18:55:02 by tstacul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	go;
	int	temp;

	start = 0;
	end = size -1;
	go = 0;
	while (go <= end)
	{
		start = 0;
		while (start < end)
		{
			if (tab[start] > tab [start +1])
			{
				temp = tab [start];
				tab [start] = tab [start + 1];
				tab [start + 1] = temp;
			}
			start++;
		}
		go++;
		end--;
	}
}
