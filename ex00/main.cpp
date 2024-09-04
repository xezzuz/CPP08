/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:27:05 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/04 11:06:15 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <array>
#include <vector>

int main() {
	std::vector<int>		container;

	container.push_back(1);
	container.push_back(5);
	container.push_back(9);
	container.push_back(7);
	container.push_back(3);
	container.push_back(6);
	container.push_back(8);
	container.push_back(4);
	container.push_back(11);
	container.push_back(42);

	std::cout << "Container Elements: " << std::endl;
	for (std::vector<int>::iterator it = container.begin(); it != container.end(); it++)
		std::cout << "[" << *it << "]";
	std::cout << std::endl;

	try {
		std::vector<int>::const_iterator it = easyfind(container, 9);
		std::cout << "The first occurence of " << *it << " in the container was found." << std::endl;

		it = easyfind(container, 1337);
	}
	catch (int toFind) {
		std::cout << "There's no occurence of " << toFind << " in the container." << std::endl;
	}
}
