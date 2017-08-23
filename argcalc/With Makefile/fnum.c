/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnum.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achuzhyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:12:14 by achuzhyk          #+#    #+#             */
/*   Updated: 2017/08/17 16:12:20 by achuzhyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

double	fnum(char *argv[], int c, double t, double n, int a)
{
	double	*p;

	p = (double*)malloc(20 * sizeof(double));
	for (int k = 0; argv[a][k] != '\0'; k++)
	{
		*(p + k) = (argv[a][k] - 48) * t;
		t = t / 10;
	}

	for (int l = 1; l < c; l++)
		*p = *p + *(p + l);

	int p1 = *p;

	n = (double)(p1);
	free(p);
	return (n);
}