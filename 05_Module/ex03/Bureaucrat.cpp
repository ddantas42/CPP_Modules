/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:31:28 by hiper             #+#    #+#             */
/*   Updated: 2024/03/16 16:43:49 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"


// Constructors
Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
	this->grade = 0;
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException(); 
		else
			this->grade = grade;
}

// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	this->grade = assign.getGrade();
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name)
{this->grade = copy.grade;}

const std::string	&Bureaucrat::getName() const
{return this->name;}

int	Bureaucrat::getGrade() const
{return this->grade;}

void Bureaucrat::incrementGrade()
{
		if (this->grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->grade--;
}

void Bureaucrat::decrementGrade()
{
		if (this->grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->grade++;
}

void	Bureaucrat::signAForm(AForm &form)
{
	const AForm *pForm = &form;
	
	if (pForm != NULL)
		form.beSigned(*this);
}

void Bureaucrat::executeForm(AForm const & form)
{
	const AForm *pForm = &form;
	
	if (pForm != NULL)
		form.execute(*this);
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() >= 0 && bureaucrat.getGrade() <= 150)
		out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	else
		out << bureaucrat.getName() << ", bureaucrat grade undefined" << std::endl;
	return out;
}
