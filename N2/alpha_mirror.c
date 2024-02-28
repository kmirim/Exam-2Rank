/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:46:02 by lbarcelo          #+#    #+#             */
/*   Updated: 2024/02/08 14:02:12 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	while(*str)
	{
		if(*str >= 'a' && *str <= 'z')
			ft_putchar('m' - (*str - 'n'));
		else if(*str >= 'A' && *str <= 'Z')
			ft_putchar('M' - (*str - 'N'));
		else
			ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int main (int count, char **value)
{
	if(count == 2)
		alpha_mirror(value[1]);
	else
		ft_putchar('\n');
}
