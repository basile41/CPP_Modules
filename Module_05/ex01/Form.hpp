/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:06:28 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/25 18:48:15 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form
{

	public:

		Form();
		Form(std::string name, int gradeToSign = 150, int gradeToExec = 150);
		Form( Form const & src );
		~Form();
		
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};

		Form &		operator=( Form const & rhs );

		std::string	getName() const;
		bool		getSign() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;

		void		beSigned();

	private:
		const std::string	_name;
		bool				_sign;
		const int			_gradeToSign;
		const int			_gradeToExec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */