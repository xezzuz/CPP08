/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:35:13 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/09 12:56:27 by nazouz           ###   ########.fr       */
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
		typedef typename container::iterator 					iterator;
		typedef typename container::const_iterator 				const_iterator;
		typedef typename container::reverse_iterator 			reverse_iterator;
		typedef typename container::const_reverse_iterator 		const_reverse_iterator;

		MutantStack();
		MutantStack(const MutantStack& original);
		MutantStack& operator=(const MutantStack& original);
		~MutantStack();

		iterator							begin();
		iterator							end();
		const_iterator						begin() const;
		const_iterator						end() const;
		reverse_iterator					rbegin();
		reverse_iterator					rend();
		const_reverse_iterator				rbegin() const;
		const_reverse_iterator				rend() const;
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

template < typename T, typename container >
typename MutantStack<T, container>::iterator					MutantStack<T, container>::begin() {
	return this->c.begin();
}

template < typename T, typename container >
typename MutantStack<T, container>::iterator					MutantStack<T, container>::end() {
	return this->c.end();
}

template < typename T, typename container >
typename MutantStack<T, container>::reverse_iterator			MutantStack<T, container>::rbegin() {
	return this->c.rbegin();
}

template < typename T, typename container >
typename MutantStack<T, container>::reverse_iterator			MutantStack<T, container>::rend() {
	return this->c.rend();
}

template < typename T, typename container >
typename MutantStack<T, container>::const_iterator				MutantStack<T, container>::begin() const {
	return this->c.begin();
}

template < typename T, typename container >
typename MutantStack<T, container>::const_iterator				MutantStack<T, container>::end() const {
	return this->c.end();
}

template < typename T, typename container >
typename MutantStack<T, container>::const_reverse_iterator		MutantStack<T, container>::rbegin() const {
	return this->c.rbegin();
}

template < typename T, typename container >
typename MutantStack<T, container>::const_reverse_iterator		MutantStack<T, container>::rend() const {
	return this->c.rend();
}

#endif