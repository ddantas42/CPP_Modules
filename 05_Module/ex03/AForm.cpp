/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:40:27 by hiper             #+#    #+#             */
/*   Updated: 2023/10/15 20:47:51 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructors
AForm::AForm() : name("default"), gradeToSign(75), gradeToExecute(75)
{this->isSigned = false;}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) :
name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	else
		this->isSigned = false;
}

AForm::~AForm() {}

AForm::AForm(const AForm &copy)
: name(copy.name), isSigned(copy.isSigned),
gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute)
{}


// Operators
AForm & AForm::operator=(const AForm &assign)
{
	this->isSigned = assign.isSigned;
	return *this;
}

int	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (this->getIsSigned() == true)
		return 2;
	else if (bureaucrat.getGrade() <= this->gradeToSign)
	{
		this->isSigned = true;
		return 1;
	}
	else
		throw AForm::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream &out, const AForm& form)
{
	std::cout <<
		"Form name: " << form.getName() << std::endl <<
		"Is form signed: ";

	if (form.getIsSigned() == true)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
		
	std::cout <<
		"Grade to sign: " << form.getGradeToSign() << std::endl <<
		"Grade to execute: " << form.getGradeToExecute() << std::endl;
		
	return out;
}

const std::string  AForm::getName() const { return this->name; }
bool	AForm::getIsSigned() const { return this->isSigned; }
int		AForm::getGradeToSign() const { return this->gradeToSign; }
int		AForm::getGradeToExecute() const { return this->gradeToExecute; }

const char*  AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char*  AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}