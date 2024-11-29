/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:22:45 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/29 14:06:54 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";

int main()
{
	std::cout << GREEN << "-----Testing with Vector container (7th position)-----" << RESET << std::endl;
    int arr1[] = {15, 25, 66, 51, 63, 98, 74, 23};
    std::vector<int> test1(arr1, arr1 + sizeof(arr1) / sizeof(int));
	try
	{
		std::cout << easyfind(test1, 23) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << GREEN << "-----Testing with List container (4th && 7th position)-----" << RESET << std::endl;
    int arr2[] = {68, 32, 51, 34, 23, 66, 71, 23};
    std::list<int> test2(arr2, arr2 + sizeof(arr2) / sizeof(int));
	try
	{
		std::cout << easyfind(test2, 23) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << GREEN << "-----Testing with Deque container (Not found)-----" << RESET << std::endl;
	int arr3[] = {68, 32, 51, 34, 67, 66, 71, 21};
    std::deque<int> test3(arr3, arr3 + sizeof(arr3) / sizeof(int));
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