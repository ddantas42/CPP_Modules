#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
// class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form();
		Form(const std::string &name, int gradeToSign, int gradeToExecute);
		Form(const Form &copy);
		
		// Destructor
		~Form();
		
		// Operators
		Form & operator=(const Form &assign);
		
		const std::string getName() const;
		bool	getIsSigned() const;
		int		getGradeToSign() const;
		int		getGradeToExecute() const;

		void	beSigned(Bureaucrat &bureaucrat);

		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooHighException : public std::exception 
		{
			const char* what() const throw();
		};
		
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
};

std::ostream&		operator<<(std::ostream &out, const Form& form);

#endif