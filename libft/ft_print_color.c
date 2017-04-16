/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 15:43:36 by emtermea          #+#    #+#             */
/*   Updated: 2015/03/30 14:58:33 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_color(char *color, char *str, int fd)
{
	ft_putstr_fd(color, fd);
    ft_putstr_fd(str, fd);
    ft_putstr_fd(RESET, fd);
}
