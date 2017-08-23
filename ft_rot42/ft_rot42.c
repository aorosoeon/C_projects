/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achuzhyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 14:23:42 by achuzhyk          #+#    #+#             */
/*   Updated: 2017/08/07 14:35:25 by achuzhyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_rot42(char *str)
{
	int i;
	int l;
	int m;
	int n;
	int s;

	l = 15;

	if (l < 26)
		m = l;
	if (l > 25)
		m = (l - 26);

	n = 65 + (26 - m);
	s = 97 + (26 - m);
	
	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] > 64) && (str[i] < n))
		{
			char a;

			a = (str[i] + m);
			printf("%c", a);
			i++;
		}

		if ((str[i] > (n - 1)) && (str[i] < 91))
		{
			char b;

			b = ((m - (91 - str[i])) + 65);
			printf("%c", b);
			i++;
		}

		if ((str[i] > 96) && (str[i] < s))
		{
			char c;

			c = (str[i] + m);
			printf("%c", c);
			i++;
		}

		if ((str[i] > (s - 1)) && (str[i] < 123))
		{
			char d;

			d = ((m - (123 - str[i])) + 97);
			printf("%c", d);
			i++;
		}

		if (str[i] == 32)
		{
			printf(" ");
			i++;
		}

		if (str[i] == 63)
		{
			printf("?");
			i++;
		}

		if ((str[i] > 43) && (str[i] < 47))
		{
			char u;

			u = str[i];
			printf("%c", u);
			i++;
		}

		if (str[i] == 39)
		{
			printf("'");
			i++;
		}

		if (str[i] == 33)
		{
			printf("!");
			i++;
		}
	}
	printf("\n");	
	return (0);
}

int	main()
{
	char str[] = "The world will know that free men stood against a tyrant, that few stood against many. ! ' - ?";
	ft_rot42(str);
	return (0);
}
