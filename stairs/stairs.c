/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stairs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achuzhyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:15:29 by achuzhyk          #+#    #+#             */
/*   Updated: 2017/08/07 20:16:26 by achuzhyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    lengh (int i, int t)
{
    int p;
    int l;
    char st = 32;
    char sd = 38;
    for (p = 0; p < t; p++)
        printf("%c", st);
    for (l = 0; l < (i - t); l++)
        printf("%c", sd);
    if (t == 0)
        printf("%c", sd);
    if (t != 0)
        printf("%c", st);
    for (l = 0; l < (i - t); l++)
        printf("%c", sd);
    printf("\n");
}

void    lengh1 (int i, int b)
{
    int g;
    int f;
    char st = 32;
    char sd = 38;
    for (g = 0; (g + b) < (i - 1); g++)
        printf("%c", st);
    for (f = 0; f < (i - g); f++)
        printf("%c", sd);
    if (b != (i - 1))
        printf("%c", st);
    if (b == (i - 1))
        printf("%c", sd);
    for (f = 0; f <= b; f++)
        printf("%c", sd);
    printf("\n");
}

int   main()
{
    int i;
    //If you write an odd number of lines, the program will build sandclock with given number of lines.
    //If you write an even number of lines, one line will be added for symmetry.
    printf("Odd number - the same.\n");
    printf("Even number - plus one.\n");
    printf("Hight: ");
    scanf("%d", &i);
    if ((i % 2) == 0)
    {
        for (int t = 0; t <= (i / 2); t++)  
            lengh(i, t);
        for (int b = (i / 2); b < i; b++)
            lengh1(i, b);
    }
    else
    {
        for (int t = 0; t < (i / 2); t++)  
            lengh(i, t);
        for (int b = (i / 2); b < i; b++)
            lengh1(i, b);
    }
    return (0);
}
