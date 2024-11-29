/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:17:11 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/28 19:17:12 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	/* Orthodox canonical form */
	MutantStack() : std::stack<T>() {}

    MutantStack(MutantStack const &other) : std::stack<T>(other) {}

	~MutantStack() {}

    MutantStack	&operator=(const MutantStack &other)
	{
		if (this != &other)
			std::stack<T>::operator=(other);
		return *this;
	}

	/* Other methods */
    iterator    begin()
    {
        return this->c.begin();
    }

    iterator    end()
    {
        return this->c.end();
    }

    const_iterator  begin() const
    {
        return this->c.begin();
    }

    const_iterator  end() const
    {
        return this->c.end();
    }
};

#endif