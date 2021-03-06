/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 20:45:20 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/14 22:25:57 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	tmp = dest;
	while (i < n && src[i] != '\0')
	{
		tmp[i] = src[i];
		i++;
	}
	while (i < n)
	{
		tmp[i] = '\0';
		i++;
	}
	return (tmp);
}
