/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:17:16 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/02 13:46:10 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>
typename T::const_iterator			easyfind(const T& aContainer, int	toFind) {
	for (typename T::const_iterator it = aContainer.begin(); it != aContainer.end(); it++) {
		if (*it == toFind)
			return it;
	}
	throw toFind;
}

#endif