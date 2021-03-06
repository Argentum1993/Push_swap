/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_end_new_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaykit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:52:34 by wmaykit           #+#    #+#             */
/*   Updated: 2019/10/04 13:50:38 by wmaykit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

t_name_cmd	ft_end_new_line(t_name_cmd cmd)
{
	if (cmd & 0xFF0000)
		return (cmd | 0xA000000);
	else
		return (cmd | 0xA0000);
}
