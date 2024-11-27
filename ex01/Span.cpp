/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:15:19 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/27 15:25:45 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _data({}) {}

Span::Span(unsigned int size) :
{

}

Span::~Span() {}

Span::Span(const Span &other)
{
    *this = other;
}

Span   &Span::operator=(const Span &other)
{
    if (this != &other)
        this->_data = other._data;
    return *this;
}

void	Span::AddNumber(int N)
{
	this->_data.push_back(N);
}

int	Span::shortestSpan()
{

}

int	Span::longestSpan()
{

}

void	Span::AddManyNumbers(int pos, int first, int last)
{

}