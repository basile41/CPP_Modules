/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:31:05 by bregneau          #+#    #+#             */
/*   Updated: 2022/08/02 19:18:03 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <set>

class Span
{

	private:
		Span();

	public:

		Span(size_t N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		size_t	size() const;
		void	addNumber(int i);
		size_t	shortestSpan() const;
		size_t	longestSpan() const;

	private:
		size_t	_N;
		std::set<int>	_tab;
		
};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */