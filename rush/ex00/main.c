/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 11:59:29 by czivre            #+#    #+#             */
/*   Updated: 2020/01/28 19:19:21 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
void	rush(int x, int y);

int		main(int argc, char **argv)
{
	rush(atoi(argv[1]) ,atoi(argv[2]));
	return (0);
}
