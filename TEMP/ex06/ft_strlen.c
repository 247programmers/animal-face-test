/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjcho <sungjcho@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:39:43 by sungjcho          #+#    #+#             */
/*   Updated: 2021/10/11 14:47:21 by sungjcho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}
