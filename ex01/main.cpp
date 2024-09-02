/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:43:16 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/02 17:36:09 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {

	std::cout << "<------------------ FIRST TEST ------------------>" << std::endl;
	try {
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		// sp.addNumber(1);
	} catch (std::out_of_range& err) {
		std::cerr << err.what() << std::endl;
	}

	std::cout << "\n<------------------ SECOND TEST ------------------>" << std::endl;
	try {
		Span sp = Span(10);

		sp.addNumber(1337);
		sp.addNumber(42);
		sp.addNumber(0);

		std::vector<int>	intContainer;
		for (int i = 1; i <= 7; i++)
			intContainer.push_back(i * 10);

		std::cout << "sp before: " << sp << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		sp.addNumber(intContainer.begin(), intContainer.end());
		std::cout << "sp after: " << sp << std::endl;
	} catch (std::out_of_range& err) {
		std::cerr << err.what() << std::endl;
	}

	std::cout << "\n<------------------ THIRD TEST ------------------>" << std::endl;
	try {
		Span sp = Span(200000);

		sp.addNumber(1337);
		sp.addNumber(42);

		std::vector<int>	intContainer;
		for (int i = 100000; i >= 1; i--)
			intContainer.push_back(i);

		std::cout << "sp before: " << sp << std::endl;
		sp.addNumber(intContainer.begin(), intContainer.end());
		std::cout << "sp after: " << sp << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	} catch (std::out_of_range& err) {
		std::cerr << err.what() << std::endl;
	}

	return 0;
}