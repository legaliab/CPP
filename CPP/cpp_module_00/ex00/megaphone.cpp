/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabdull <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 22:16:18 by alabdull          #+#    #+#             */
/*   Updated: 2024/01/22 17:42:07 by alabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	ft_toupper(std::string str)
{
	int i = -1;
	while (str[++i])
		std::cout << (char)toupper(str[i]);
}

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		int i = 0;
		while (++i < ac)
			ft_toupper(av[i]);
	}
	std::cout << std::endl;
}
