#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:

		// Constructors
		AForm();
		AForm(const std::string &name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &copy);
		
		// Destructor
		~AForm();
		
		// Operators
		AForm & operator=(const AForm &assign);
		
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
		
		virtual void execute(Bureaucrat const & executor) const = 0;

	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
};

std::ostream&		operator<<(std::ostream &out, const AForm& form);

#endif