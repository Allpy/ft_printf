/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_str.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:14:21 by alermi            #+#    #+#             */
/*   Updated: 2024/11/29 15:14:22 by alermi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	w_str(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if (write(1, str, 1) == -1)
			return (-1);
		str++;
	}
	return (temp - str);
}
