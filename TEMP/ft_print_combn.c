/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjcho <sungjcho@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:40:59 by sungjcho          #+#    #+#             */
/*   Updated: 2021/10/11 01:42:41 by sungjcho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	loop(int n, int b, int c, char *a);

void	ft_print_combn(int n)
{
	char	a[10];
	int		row;
	int		pnum;
	int		repeatNumber;

	repeatNumber = n;
	row = 0;
	pnum = 0;
	while (pnum < 10 && row < 10)
	{	
		a[row] = pnum + 48;
		pnum++;
		loop(repeatNumber, row, pnum, a);
	}
}

void	loop(int size, int row, int pNumber, char *a)
{
	row++;
	while (pNumber < 10 && row < size)
	{
		a[row] = pNumber + 48;
		pNumber++;
		loop(size, row, pNumber, a);
	}
	if (row == size && a[0] == 58 - size)
	{
		write(1, a, size);
	}
	else if (row == size)
	{
		write(1, a, size);
		write(1, ", ", 2 );
	}
}
