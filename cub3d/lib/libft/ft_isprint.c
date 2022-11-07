/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hakaman <hakaman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 22:02:42 by hakaman       #+#    #+#                 */
/*   Updated: 2021/02/20 13:15:13 by hakaman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}