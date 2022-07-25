/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:37:39 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/25 21:50:22 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

	public:

		AForm();
		AForm(const std::string &name, int gradeToSign = 150, int gradeToExec = 150);
		AForm( AForm const & src );
		virtual ~AForm();
		
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		class UnsignedException : public std::exception
		{
			const char* what() const throw();
		};

		AForm &		operator=( AForm const & rhs );

		const std::string &	getName() const;
		bool				getSign() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;

		void			beSigned(Bureaucrat const &b);
		virtual void	execute(Bureaucrat const & executor) const = 0;

	private:
		const std::string	_name;
		bool				_sign;
		const int			_gradeToSign;
		const int			_gradeToExec;

};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ AFORM_H */