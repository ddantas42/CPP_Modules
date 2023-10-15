#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form();
		Form(const std::string &name, int gradeToSign, int gradeToExecute);
		Form(const Form &copy);
		
		// Destructor
		~Form() {};
		
		// Operators
		Form & operator=(const Form &assign);
		
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

std::ostream&		operator<<(std::ostream &out, const Form& form);

#endif