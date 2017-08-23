/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achuzhyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:12:46 by achuzhyk          #+#    #+#             */
/*   Updated: 2017/08/17 16:13:01 by achuzhyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

double	doop(char *argv[], double n1, double n2)
{
	if (argv[2][0] == 43)
		printf("Result: %f\n", n1 + n2);
	else if (argv[2][0] == 45)
		printf("Result: %f\n", n1 - n2);
	else if (argv[2][0] == 42)
		printf("Result: %f\n", n1 * n2);
	else if (argv[2][0] == 47)
		printf("Result: %f\n", n1 / n2);
	return (0);
}