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
{this->isSigned = false;}

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

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
		if (this->getIsSigned() == true)
			std::cout << "AForm " << this->getName() << " is already signed" << std::endl;
		else if (bureaucrat.getGrade() <= this->gradeToSign)
		{
			this->isSigned = true;
			std::cout << "AForm "
					<<	this->getName() << " was signed by "
					<< bureaucrat.getName() << std::endl;
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

const std::string AForm::getName() const { return this->name; }
bool	AForm::getIsSigned() const { return this->isSigned; }
int		AForm::getGradeToSign() const { return this->gradeToSign; }
int		AForm::getGradeToExecute() const { return this->gradeToExecute; }