/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:15:21 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/27 15:26:07 by eviscont         ###   ########.fr       */
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
		int					_size;
		std::vector<int>	_data;

    public:
        Span();
        Span(unsigned int size);
        virtual ~Span();
        Span(const Span &other);
        Span &operator=(const Span &other);

		void	AddNumber(int N);
		int		shortestSpan();
		int		longestSpan();
		void	AddManyNumbers(int pos, int first, int last);
};

#endif