/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjcho <sungjcho@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:48:49 by sungjcho          #+#    #+#             */
/*   Updated: 2021/10/11 15:23:45 by sungjcho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	loop(int a, int *b, int c);

void	ft_rev_int_tab(int *tab, int size)
{
	int	origin;
	int	rev;
	int	*reverted;
	int	negative;

	negative = 0;
	origin = *tab;
	if (*tab < 0)
	{
		origin = -(*tab);
		negative = 1;
	}
	rev = 0;
	reverted = &rev;
	loop(origin, reverted, size);
	*tab = *reverted;
	if (negative)
		*tab = -(*reverted);
}

void	loop(int ori, int *revert, int cnt)
{
	if (cnt-- > 0)
	{
		*revert = (*revert * 10) + ori % 10;
		ori = ori / 10;
		loop(ori, revert, cnt);
	}
}
