/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:46:20 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/09 12:02:18 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
	// private default constructor
}

Span::Span(unsigned int n) {
	maxSize = n;
}

Span::Span(const Span& original) : container(original.container) {
	maxSize = original.maxSize;
}

Span& Span::operator=(const Span& original) {
	if (this != &original) {
		maxSize = original.maxSize;
		container = original.container;
	}
	return *this;
}

Span::~Span() {

}

void		Span::addNumber(int toAdd) {
	if (container.size() < maxSize)
		container.push_back(toAdd);
	else
		throw std::out_of_range("Can't add a number, the span is full");
}

void		Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	int		rangeSize = std::distance(begin, end);
	if (container.size() + rangeSize <= maxSize)
		container.insert(container.end(), begin, end);
	else
		throw std::out_of_range("Can't add that range of numbers, the span will exceed its max size");
}

int			Span::shortestSpan() {
	if (container.size() < 2)
		throw std::out_of_range("Span size is not enough");

	std::vector<int>	sortedContainer(container);
	int					smallestDiff = std::numeric_limits<int>::max();

	std::sort(sortedContainer.begin(), sortedContainer.end());
	for (std::vector<int>::iterator it = sortedContainer.begin(); it != sortedContainer.end(); it++) {
		if (it + 1 != sortedContainer.end() && *(it + 1) - *it < smallestDiff)
			smallestDiff = *(it + 1) - *it;
	}
	return smallestDiff;
}

int			Span::longestSpan() {
	if (container.size() < 2)
		throw std::out_of_range("Span size is not enough");

	int		min = *std::min_element(container.begin(), container.end());
	int		max = *std::max_element(container.begin(), container.end());

	return max - min;
}

const std::vector<int>&		Span::getContainer() const {
	return container;
}

std::ostream&		operator<<(std::ostream& out, const Span& sp) {
	std::vector<int>		container = sp.getContainer();
	for (std::vector<int>::iterator it = container.begin(); it != container.end(); it++) {
		out << "[" << *it << "]";
	}
	return out;
}
