/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achuzhyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:13:24 by achuzhyk          #+#    #+#             */
/*   Updated: 2017/08/17 16:43:15 by achuzhyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "lidoop.h"

int		c = 0; //counter (digits)
double	t = 1; //value of ten
double	n = 0; //ready to operations number
int		a = 1; //show the argument of first number (use in many functions)
int		b = 3; //show the argument of second number (use only in main)

int	main(int argc, char *argv[])
{
	if (conditions(argc, argv) < 2)
		return (0);
	int a = 1;
	double n1 = fnum(argv, dcounter(argv, c, a), ten(dcounter(argv, c, a), t), n, a);
	int b = 3;
	double n2 = fnum(argv, dcounter(argv, c, b), ten(dcounter(argv, c, b), t), n, b);
	doop(argv, n1, n2);
	return (0);
}
