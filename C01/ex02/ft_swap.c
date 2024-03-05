/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verrodri <verrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:18:20 by verrodri          #+#    #+#             */
/*   Updated: 2024/03/05 16:35:26 by verrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	ptra = &a;
	ptrb = &b;
	a = 3;
	b = 2;
	ft_swap(ptra, ptrb);
	printf("a:%d b:%d", a, b);
	return (0);
}*/
