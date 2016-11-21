/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 06:48:52 by amanchon          #+#    #+#             */
/*   Updated: 2016/11/21 08:02:37 by amanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int					main(int argc, char **argv)
{
	int			nb_opt;
	t_opt		opt;
	t_list		dir_list;

	dir_list = NULL;
	nb_opt = parse_args(&opt);
	if (!(dir_list = init_list()))
		return (0);
	while (nb_opt < argc)
		get_dir_data(argv[nb_opt++]);

	return (0);
}
