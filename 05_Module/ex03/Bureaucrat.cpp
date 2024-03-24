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
	{
			int ret = 0;
		try {

			ret = form.beSigned(*this);
			if (ret == 1)
			{
			std::cout << "Form "
						<<	form.getName() << " was signed by "
						<< this->getName() << std::endl;
			}
			else if (ret == 2)
			{
				std::cout << this->getName() << " couldn't sign " << form.getName()
						<< " because " << "Form is already sign" << std::endl;
			}
		}
		catch (std::exception &e)
		{
			std::cout << this->getName() << " couldn't sign " << form.getName()
						<< " because " << e.what() << std::endl;
		}
	}
	else
		std::cout << "Form is NULL" << std::endl;
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
