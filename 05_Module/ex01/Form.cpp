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
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	else
		this->isSigned = false;
}

Form::~Form() {}

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

int	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->getIsSigned() == true)
		return 2;
	else if (bureaucrat.getGrade() <= this->gradeToSign)
	{
		this->isSigned = true;
		return 1;
	}
	else
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream &out, const Form& Form)
{
	std::cout <<
		"Form name: " << Form.getName() << std::endl <<
		"Is form signed: ";

	if (Form.getIsSigned() == true)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;

	std::cout <<
		"Grade to sign: " << Form.getGradeToSign() << std::endl <<
		"Grade to execute: " << Form.getGradeToExecute() << std::endl;

	return out;
}

const std::string Form::getName() const { return this->name; }
bool	Form::getIsSigned() const { return this->isSigned; }
int		Form::getGradeToSign() const { return this->gradeToSign; }
int		Form::getGradeToExecute() const { return this->gradeToExecute; }

const char*  Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char*  Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}