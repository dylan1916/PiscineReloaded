/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:02:51 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/07 15:20:40 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	affiche(char **str)
{
	int		m;

	m = 1;
	while (str[m])
	{
		ft_putstr(str[m]);
		ft_putchar('\n');
		m++;
	}
}

int		main(int argc, char **argv)
{
	char	*temp;
	int		j;
	int		k;

	k = argc - 1;
	while (k >= 1)
	{
		j = 1;
		while (j != k)
		{
			if (ft_strcmp(argv[k], argv[j]) < 0)
			{
				temp = argv[k];
				argv[k] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		k--;
	}
	affiche(argv);
	return (0);
}
