/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verrodri <verrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:02:28 by verrodri          #+#    #+#             */
/*   Updated: 2024/03/06 12:14:30 by verrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int	a;
	int	b;
	int	tmp;
	int	tmp2;
	int	*diva;
	int	*modb;

	a = 7;
	b = 4;
	diva = &tmp;
	modb = &tmp2;
	ft_div_mod(a, b, diva, modb);
	printf("div:%d mod:%d", *diva, *modb);
	return (0);
}*/
