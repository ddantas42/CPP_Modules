/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:31:28 by hiper             #+#    #+#             */
/*   Updated: 2023/10/13 22:17:26 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat() : name("Default Bureaucrat"), grade(150) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException(); 
	else
		this->grade = grade;

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
			throw GradeTooHighException();
		else
			this->grade--;
}

void Bureaucrat::decrementGrade()
{
		if (this->grade + 1 > 150)
			throw GradeTooLowException();
		else
			this->grade++;
}




// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	this->grade = assign.getGrade();
	return *this;
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() >= 0 && bureaucrat.getGrade() <= 150)
		out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	else
		out << bureaucrat.getName() << ", bureaucrat grade undefined" << std::endl;
	return out;
}

const char*  Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char*  Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}