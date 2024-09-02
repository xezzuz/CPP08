/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:27:05 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/02 13:53:43 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <array>
#include <vector>

int main() {
	std::array<int, 10>		container = { 1, 5, 9, 7, 3, 6, 8, 4, 11, 42 };

	std::cout << "Container Elements: " << std::endl;
	for (std::array<int, 10>::iterator it = container.begin(); it != container.end(); it++)
		std::cout << "[" << *it << "]";
	std::cout << std::endl;

	try {
		std::array<int, 10>::const_iterator it = easyfind(container, 9);
		std::cout << "The first occurence of " << *it << " in the container was found." << std::endl;

		it = easyfind(container, 1337);
	}
	catch (int toFind) {
		std::cout << "There's no occurence of " << toFind << " in the container." << std::endl;
	}
}
