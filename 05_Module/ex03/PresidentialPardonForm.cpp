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
	this->target = copy.target;
	(void) copy;
}


// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
}


// Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	this->target = assign.target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
	{
		std::cout << "Form " << this->getName() << " has not been signed" << std::endl;
		return;
	}
		if (executor.getGrade() <= this->getGradeToExecute())
		{
			std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		}
		else
		{
			throw AForm::GradeTooLowException();
		}
}
