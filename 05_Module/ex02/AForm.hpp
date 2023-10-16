#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class AForm
{
	protected:
	public:
		AForm();
		AForm(const std::string &name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &copy);
		
		// Constructors
		
		// Destructor
		~AForm() {};
		
		// Operators
		AForm & operator=(const AForm &assign);
		
		const std::string getName() const { return this->name; };
		bool	getIsSigned() const { return this->isSigned; };
		int		getGradeToSign() const { return this->gradeToSign; };
		int		getGradeToExecute() const { return this->gradeToExecute; };

		void	beSigned(Bureaucrat &bureaucrat);

		class GradeTooLowException : public std::exception
		{
			const char* what() const throw() {return "Grade is too low";}
		};
		class GradeTooHighException : public std::exception 
		{
			const char* what() const throw() {return "Grade is too high";}
		};
		
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
};

std::ostream&		operator<<(std::ostream &out, const AForm& form);

#endif