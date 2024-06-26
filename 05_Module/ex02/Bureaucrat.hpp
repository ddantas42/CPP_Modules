/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:31:26 by hiper             #+#    #+#             */
/*   Updated: 2024/03/15 09:25:31 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		
		// Destructor
		~Bureaucrat();
		
		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);

		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooHighException : public std::exception 
		{
			const char* what() const throw();
		};
		
		const std::string	&getName() const;
		int					getGrade() const;
		
		void				incrementGrade();
		void				decrementGrade();

		void				signAForm(AForm &AForm);
		void				executeForm(AForm const & form); 
		
	private:
		const std::string	name;	
		int					grade;
};

std::ostream&		operator<<(std::ostream &out, const Bureaucrat& bureaucrat);

#endif