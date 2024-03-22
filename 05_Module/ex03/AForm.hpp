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
		virtual ~AForm() {};
		
		// Operators
		AForm & operator=(const AForm &assign);
		
		const std::string getName() const;
		bool	getIsSigned() const;
		int		getGradeToSign() const;
		int		getGradeToExecute() const;

		void	beSigned(Bureaucrat &bureaucrat);

		class GradeTooLowException : public std::exception
		{
			const char* what() const throw() {return "Grade is too low";}
		};
		class GradeTooHighException : public std::exception 
		{
			const char* what() const throw() {return "Grade is too high";}
		};
		
		virtual void execute(Bureaucrat const & executor) const {(void)executor;std::cout << "this shouldn-t be here...\n";};

	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
};

std::ostream&		operator<<(std::ostream &out, const AForm& form);

#endif