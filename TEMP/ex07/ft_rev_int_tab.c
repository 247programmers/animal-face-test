/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjcho <sungjcho@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:30:55 by sungjcho          #+#    #+#             */
/*   Updated: 2021/10/11 16:01:11 by sungjcho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	while (count < size / 2 )
	{
		temp = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = temp;
		count++;
	}
}
