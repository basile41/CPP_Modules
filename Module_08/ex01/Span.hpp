/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:31:05 by bregneau          #+#    #+#             */
/*   Updated: 2022/08/05 17:42:26 by bregneau         ###   ########.fr       */
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

	
		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		class FullSpanException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{	return ("The span is full");}		
		};
		class TooShortSpanException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{	return ("The span is too short");}		
		};

		Span &		operator=( Span const & rhs );

		unsigned int	size() const;
		unsigned int	maxSize() const;
		void			addNumber(int i);
		template <class InputIterator>
		void			addNumbers(InputIterator first, InputIterator last)
		{
			for (InputIterator it = first; it != last; it++)
				addNumber(*it);
		}

		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

	private:
	
		typedef std::multiset<int>::iterator iterator;

		unsigned int		_N;
		std::multiset<int>	_tab;
		unsigned int		_shortestSpan;
		
};

#endif /* ************************************************************ SPAN_H */