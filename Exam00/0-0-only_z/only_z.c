/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 10:27:30 by exam              #+#    #+#             */
/*   Updated: 2019/11/22 11:14:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	only_z(void)
{
	write(1, "z", 1);
}

int	main(void)
{
	only_z();
	return (0);
}
