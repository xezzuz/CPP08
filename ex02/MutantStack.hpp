/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:35:13 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/03 19:10:04 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template < typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container> {
	public:
		typedef typename container::iterator 			iterator;
		typedef typename container::const_iterator 		const_iterator;
		// reverse interator // reverse const iterator

		MutantStack();
		MutantStack(const MutantStack& original);
		MutantStack& operator=(const MutantStack& original);
		~MutantStack();

		iterator		begin() {
			return this->c.begin();
		}
		iterator		end() {
			return this->c.end();
		}
};

template < typename T, typename container >
MutantStack<T, container>::MutantStack() : std::stack<T, container>() {
	std::cout << "MutantStack::Constructor Called" << std::endl;
}

template < typename T, typename container >
MutantStack<T, container>::MutantStack(const MutantStack& original) : std::stack<T, container>(original) {
	std::cout << "MutantStack::Copy Constructor Called" << std::endl;
}

template < typename T, typename container >
MutantStack<T, container>&	MutantStack<T, container>::operator=(const MutantStack<T, container>& original) {
	if (this != &original)
		std::stack<T, container>::operator=(original);
	std::cout << "MutantStack::Copy Assignment Operator Called" << std::endl;
	return *this;
}

template < typename T, typename container >
MutantStack<T, container>::~MutantStack() {
	std::cout << "MutantStack::Destructor Called" << std::endl;
}

#endif