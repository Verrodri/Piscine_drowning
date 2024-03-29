/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verrodri <verrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:03:32 by verrodri          #+#    #+#             */
/*   Updated: 2024/03/07 16:30:09 by verrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;
	int	tmp2;

	tmp = *a / *b;
	tmp2 = *a % *b;
	*a = tmp;
	*b = tmp2;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	div = &a;
	mod = &b;
	a = 2;
	b = 3;
	ft_ultimate_div_mod(div, mod);
	printf("a:%d b:%d", a, b);
	return (0);
}*/
