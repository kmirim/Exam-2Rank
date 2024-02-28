/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:10:06 by lbarcelo          #+#    #+#             */
/*   Updated: 2024/02/23 16:24:31 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *s)
{
	int	count = 0;
	if (!s)
		return (count);
	while (s[count])
		count++;
	return (count);
}

void	rev_print(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (str[i])
	{
		ft_putchar(str[i]);
		i--;
	}
	ft_putchar('\n');
}

int	main(int count, char **value)
{
	if (count == 2)
		rev_print(value[1]);
	else
		ft_putchar('\n');
	return (0);
}
