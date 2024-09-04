/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:17:16 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/03 18:35:17 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::const_iterator			easyfind(const T& aContainer, int toFind) {
	typename T::const_iterator	it = std::find(aContainer.begin(), aContainer.end(), toFind);
	if (it == aContainer.end())
		throw toFind;
	return it;
}

#endif