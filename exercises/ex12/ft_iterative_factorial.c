/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:01:35 by jheiskan          #+#    #+#             */
/*   Updated: 2021/10/28 21:51:01 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > i)
	{
		if (result == 0)
			result++;
		result += result * i;
		i++;
	}
	return (result);
}
