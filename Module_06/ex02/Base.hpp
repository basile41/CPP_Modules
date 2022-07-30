/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:03:32 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/30 15:25:07 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	public:
		virtual ~Base();
};

class A : public Base{};

class B : public Base{};

class C : public Base{};

#endif