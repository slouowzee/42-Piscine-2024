/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysaindo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 03:57:48 by rysaindo          #+#    #+#             */
/*   Updated: 2024/07/21 17:37:07 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void		ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x))
				ft_putchar ('A');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar ('C');
			else if ((i == 1 || i == y) || (j == 1 || j == x))
				ft_putchar ('B');
			else
				ft_putchar (' ');
			j++;
		}
		ft_putchar ('\n');
		i++;
	}
}
