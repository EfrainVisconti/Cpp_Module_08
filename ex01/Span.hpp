/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:15:21 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/27 18:37:35 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>

class Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_data;

	public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span &other);
        Span &operator=(const Span &other);

		void	addNumber(int number);
		int		shortestSpan() const;
		int		longestSpan() const;
		void	AddManyNumbers(const std::vector<int> &other);
		void	printSpan() const;
};

#endif