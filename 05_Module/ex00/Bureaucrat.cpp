/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:31:28 by hiper             #+#    #+#             */
/*   Updated: 2023/10/06 23:10:24 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{

}


Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	(void) copy;
}

const std::string	&Bureaucrat::getName() const
{return this->name;}

int	Bureaucrat::getGrade() const
{return this->grade;}

// Destructor
Bureaucrat::~Bureaucrat()
{}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	(void) assign;
	return *this;
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return out;
}
