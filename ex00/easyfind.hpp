/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:22:42 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/27 14:14:01 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <iterator>

/**
 * @brief Finds the index of the first occurrence of an element in a container.
 * @tparam T Type of the container.
 * @param cont The container to search in.
 * @param element The element to find.
 * @return The index of the element if found.
 * @throws std::invalid_argument if the element is not found.
 */

template <typename T>
int	easyfind(const T &cont, int element)
{
	typename T::const_iterator it;
	it = std::find(cont.begin(), cont.end(), element);
	if (it == cont.end())
		throw std::invalid_argument("Argument not found");
	return std::distance(cont.begin(), it);
}

#endif // EASYFIND_HPP
