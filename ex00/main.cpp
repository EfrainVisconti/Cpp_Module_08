/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:22:45 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/27 13:08:23 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <array>
#include <deque>

const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";

int main()
{
	std::cout << GREEN << "-----Testing with Vector container (7th position)-----" << RESET << std::endl;
	std::vector<int> test1 = {15, 25, 66, 51, 63, 98, 74, 23};
	try
	{
		std::cout << easyfind(test1, 23) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << GREEN << "-----Testing with Array container (4th && 7th position)-----" << RESET << std::endl;
	std::array<int, 8> test2 = {68, 32, 51, 34, 23, 66, 71, 23};
	try
	{
		std::cout << easyfind(test2, 23) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << GREEN << "-----Testing with Deque container (Not found)-----" << RESET << std::endl;
	std::deque<int> test3 = {68, 32, 51, 34, 67, 66, 71, 21};
	try
	{
		std::cout << easyfind(test3, 23) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}