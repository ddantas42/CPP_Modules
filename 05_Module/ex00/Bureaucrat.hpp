/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:31:26 by hiper             #+#    #+#             */
/*   Updated: 2023/10/06 23:10:17 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat(const std::string &name, int grade);
		
		Bureaucrat(const Bureaucrat &copy);
		
		// Destructor
		~Bureaucrat();
		
		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);

		class GradeTooLowException : public std::exception
		{
			
		};
		class GradeTooHighException : public std::exception 
		{
		};


		const std::string	&getName() const;
		int					getGrade() const;
		

	private:
		const std::string	name;	
		int					grade;
		Bureaucrat() {};
};

std::ostream&		operator<<(std::ostream &out, const Bureaucrat& bureaucrat);

#endif