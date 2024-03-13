#include "PresidentialPardonForm.hpp"
#include <fstream>

// Constructors
PresidentialPardonForm::PresidentialPardonForm() : AForm("default_Shruberry", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm()
{
	(void) copy;
}


// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
}


// Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	(void) assign;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (executor.getGrade() <= this->getGradeToExecute())
		{
			std::cout << "Bureaucrat " << executor.getName() << "  has been pardoned by Zaphod Beeblebrox" << std::endl;
		}
		else
		{
			throw AForm::GradeTooLowException();
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
