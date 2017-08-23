/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-opw.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achuzhyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 22:18:49 by achuzhyk          #+#    #+#             */
/*   Updated: 2017/08/16 22:19:57 by achuzhyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (1);
	else
	{
		for (int i = 0; argv[1][i] != '\0'; i++)
		{
			if ((argv[1][i] < 48) || (argv[1][i] > 57))
				return (0);
		}
		for (int i = 0; argv[2][i] != '\0'; i++)
		{
			if ((argv[2][i] != 42) && (argv[2][i] != 43) && (argv[2][i] != 45) && (argv[2][i] != 47) && (i > 0))
				return (0);
		}
		for (int i = 0; argv[3][i] != '\0'; i++)
		{
			if ((argv[3][i] < 48) || (argv[3][i] > 57))
				return (0);
		}
	}
	int r = 0;
	while (argv[1][r] != '\0')
		r++;
	int g = 0;
	double v = 1;
	while (g < r - 1)
	{
		v = v * 10;
		g++;
	}
	int t = 0;
	while (argv[3][t] != '\0')
		t++;
	int a = 0;
	double b = 1;
	while (a < t - 1)
	{
		b = b * 10;
		a++;
	}
	double *p;
	p = (double*) malloc(20 * sizeof(double));
	for (int q = 0; argv[1][q] != '\0'; q++)
	{
		*(p + q) = (argv[1][q] - 48) * v;
		v = v / 10;
	}
	for (int x = 1; x < r; x++)
	{
		*p = *p + *(p + x);
	}
	int l = *p;
	double h = (double)(l);
	free(p);
	double *z;
	z = (double*) malloc(20 * sizeof(double));
	for (int s = 0; argv[3][s] != '\0'; s++)
	{
		*(z + s) = (argv[3][s] - 48) * b;
		b = b / 10;
	}
	for (int y = 1; y < t; y++)
	{
		*z = *z + *(z + y);
	}
	int o = *z;
	double e = (double)(o);
	free(z);
	if (argv[2][0] == 43)
		printf("Result: %f\n", h + e);
	else if (argv[2][0] == 45)
		printf("Result: %f\n", h - e);
	else if (argv[2][0] == 42)
		printf("Result: %f\n", h * e);
	else if (argv[2][0] == 47)
		printf("Result: %f\n", h / e);
	else
		return (0);
}
