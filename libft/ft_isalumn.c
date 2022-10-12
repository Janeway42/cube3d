/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalumn.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpopa <cpopa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 12:22:01 by cpopa         #+#    #+#                 */
/*   Updated: 2022/05/01 17:37:27 by cpopa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
