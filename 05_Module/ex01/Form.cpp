/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:40:27 by hiper             #+#    #+#             */
/*   Updated: 2023/10/13 22:56:20 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors
Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) :
name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{isSigned = false;}

Form::Form(const Form &copy)
: name(copy.name), isSigned(copy.isSigned),
gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute)
{}


// Operators
Form & Form::operator=(const Form &assign)
{
	(void) assign;
	return *this;
}

std::ostream&	operator<<(std::ostream &out, const Form& Form)
{
	std::cout <<
		"Form name: " << Form.getName() << std::endl <<
		"Is form signed: " << Form.getIsSigned() << std::endl <<
		"Grade to sign: " << Form.getGradeToSign() << std::endl <<
		"Grade to execute: " << Form.getGradeToExecute() << std::endl;
	return out;
}