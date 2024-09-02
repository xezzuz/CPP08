/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:35:13 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/02 20:04:36 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::iterator 			iterator;
		typedef typename std::stack<T>::const_iterator 		const_iterator;
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

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {
	std::cout << "MutantStack::Constructor Called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& original) : std::stack<T>(original) {
	std::cout << "MutantStack::Copy Constructor Called" << std::endl;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T>& original) {
	if (this != &original)
		std::stack<T>::operator=(original);
	std::cout << "MutantStack::Copy Assignment Operator Called" << std::endl;
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {
	std::cout << "MutantStack::Constructor Called" << std::endl;
}

#endif