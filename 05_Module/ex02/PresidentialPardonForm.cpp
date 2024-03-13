#include "PresidentialPardonForm.hpp"
#include <fstream>

// Constructors
PresidentialPardonForm::PresidentialPardonForm()
: AForm("default_Shruberry", 25, 5), target("default_target")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: AForm("default_Shruberry", 25, 5), target(target)
{
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): AForm()
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
	if (this->getIsSigned() == false)
	{
		std::cout << "Form " << this->getName() << " has not been signed" << std::endl;
		return;
	}
	try
	{
		if (executor.getGrade() <= this->getGradeToExecute())
		{
			std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
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
