/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:37:02 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/09 13:06:53 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
#include <deque>

int main()
{
	{
		std::cout << "\n<------------------ SUBJECT TESTS ------------------>" << std::endl;
		MutantStack<int> mstack;
	
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> 		s(mstack);
		MutantStack<int>		newStack(mstack);
	}
	{
		std::cout << "\n<------------------ MY TESTS ------------------>" << std::endl;
		MutantStack<int>	myStack;

		myStack.push(7);
		myStack.push(42);
		myStack.push(13);
		myStack.push(6);
		myStack.push(9);
		myStack.push(1337);
		myStack.push(8);

		MutantStack<int>::iterator it = myStack.begin();
		MutantStack<int>::iterator ite = myStack.end();
		
		std::cout << "\nIterating through the MutantStack :" << std::endl;
		for (MutantStack<int>::iterator t_it = it; t_it != ite; t_it++) {
			std::cout << *t_it << std::endl;
		}
		
		std::cout << "\nPopping the top element " << myStack.top() << " :" << std::endl;
		myStack.pop();
		it = myStack.begin();
		ite = myStack.end();
		for (MutantStack<int>::iterator t_it = it; t_it != ite; t_it++) {
			std::cout << *t_it << std::endl;
		}
		
		std::cout << "\nIterating through the MutantStack in reverse :" << std::endl;
		MutantStack<int>::reverse_iterator rit = myStack.rbegin();
		MutantStack<int>::reverse_iterator rite = myStack.rend();
		for (MutantStack<int>::reverse_iterator t_it = rit; t_it != rite; t_it++) {
			std::cout << *t_it << std::endl;
		}
	}
	
	return 0;
}