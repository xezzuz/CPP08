/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:05:32 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/02 17:22:59 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span {
	private:
		unsigned int			maxSize;
		std::vector<int>		container;
	public:
		Span(unsigned int n);
		Span(const Span& original);
		Span& operator=(const Span& original);
		~Span();

		void						addNumber(int toAdd);
		int							shortestSpan();
		int							longestSpan();

		void						addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		const std::vector<int>&		getContainer() const;
};

std::ostream&		operator<<(std::ostream& out, const Span& sp);

#endif