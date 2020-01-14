/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyusuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 19:03:03 by dyusuf            #+#    #+#             */
/*   Updated: 2020/01/13 20:28:35 by dyusuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;
	int		i;

	i = 0;
	temp = dest;
	while (src[i] != '\0')
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}