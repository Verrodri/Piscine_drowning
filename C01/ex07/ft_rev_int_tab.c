/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verrodri <verrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:07:49 by verrodri          #+#    #+#             */
/*   Updated: 2024/03/06 12:08:06 by verrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

/*int	main(void)
{
	int	i = 0;

	int	tab[] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(tab, 6);
	while (i < 6)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/