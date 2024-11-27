/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:15:19 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/27 18:49:36 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int N) : _size(N) {}

Span::~Span() {}

Span::Span(const Span &other)
{
    *this = other;
}

Span   &Span::operator=(const Span &other)
{
    if (this != &other)
	{
		this->_size = other._size;
        this->_data = other._data;
	}
    return *this;
}

void	Span::addNumber(int number)
{
	if (this->_data.size() == this->_size)
		throw std::out_of_range("Span is full, you can't add more numbers");
	this->_data.push_back(number);
}

int	Span::shortestSpan() const
{
	if (this->_data.size() < 2)
		throw std::logic_error("Invalid shortest Span request");
	std::vector<int> aux(this->_data);
	std::sort(aux.begin(), aux.end());
	int	result = aux[1] - aux[0];
	for (unsigned long i = 1; i < aux.size() - 1; i++)
	{
		int tmp = aux[i + 1] - aux[i];
        if (tmp < result)
			result = tmp;
	}
	return result;
}

int	Span::longestSpan() const
{
	if (this->_data.size() < 2)
		throw std::logic_error("Invalid longest Span request");
	return *std::max_element(this->_data.begin(), this->_data.end())
	- *std::min_element(this->_data.begin(), this->_data.end());
}

void	Span::AddManyNumbers(const std::vector<int> &other)
{
	if (this->_data.size() + other.size() > this->_size)
		throw std::out_of_range("Adding these numbers will exceed the maximum size of the Span");
	this->_data.insert(this->_data.end(), other.begin(), other.end());
}

void	Span::printSpan() const
{
	if (this->_data.empty())
	{
		std::cout << "Empty Span" << std::endl;
		return ;
	}
	for (std::vector<int>::const_iterator i = this->_data.begin(); i != this->_data.end(); ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;
}