/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypawijit <ypawijit@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:15:35 by ypawijit          #+#    #+#             */
/*   Updated: 2021/02/13 18:36:04 by ypawijit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	loop_putchar(char l, char m, char n, int a);

void	rush(int a, int b)
{
	int j;

	j = 1;
	while (j <= b)
	{
		if ((j == 1) || (j == b))
		{
			loop_putchar('A', 'C', 'B', a);
		}
		else
		{
			loop_putchar('B', 'B', ' ', a);
		}
		j++;
	}
}