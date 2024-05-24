/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nryser <nryser@student.42lausane.ch>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:11:44 by nryser            #+#    #+#             */
/*   Updated: 2024/05/24 18:11:47 by nryser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen(long n)
{
	int	count;

	count = 0;
	if (n == 2147483648)
		return (10);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
