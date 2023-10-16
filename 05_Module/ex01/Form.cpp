/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:40:27 by hiper             #+#    #+#             */
/*   Updated: 2023/10/15 20:47:51 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors
Form::Form() : name("default"), gradeToSign(75), gradeToExecute(75)
{isSigned = false;}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) :
name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{this->isSigned = false;}

Form::Form(const Form &copy)
: name(copy.name), isSigned(copy.isSigned),
gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute)
{}


// Operators
Form & Form::operator=(const Form &assign)
{
	this->isSigned = assign.isSigned;
	return *this;
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	try {
		if (this->getIsSigned() == true)
			throw "Form already signed";
		if (bureaucrat.getGrade() <= this->gradeToSign)
		{
			this->isSigned = true;
			std::cout << "Form "
					<<	this->getName() << " was signed by "
					<< bureaucrat.getName() << std::endl;
		}
		else
			throw Form::GradeTooLowException();

	}
	catch (char *str) {
		std::cout << str << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
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