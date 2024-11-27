/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:15:11 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/27 18:27:30 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <vector>

#define MAX_VAL 10000

const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";

int main()
{
	{
		std::cout << GREEN << "-----Normal test (subject)-----" << RESET << std::endl;
		try
		{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			//sp.addNumber(15); With this line fails, Span data is full.
			sp.printSpan();
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << GREEN << "-----Test with mistakes (throw exception)-----" << RESET << std::endl;
		try
		{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.printSpan();
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << GREEN << "-----Test with 10.000 numbers-----" << RESET << std::endl;
		try
		{
			std::vector<int> bigTest(MAX_VAL);
			srand(time(NULL));
			for (int i = 0; i < MAX_VAL; i++)
        		bigTest[i] = rand() % MAX_VAL + 1;
			Span sp = Span(MAX_VAL);
			sp.AddManyNumbers(bigTest);
			sp.printSpan();
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}