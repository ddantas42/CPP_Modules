#include "RobotomyRequestForm.hpp"
#include <cstdlib>

// Constructors
RobotomyRequestForm::RobotomyRequestForm()
: AForm("default_robotomy", 72, 45), target("default_target")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: AForm("default_robotomy", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm()
{
	this->target = copy.target;
	(void) copy;
}


// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
}


// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	this->target = assign.target;
	return *this;
}

int RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		return 1;
	srand(time(NULL));
	int random = rand() % 2;
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		if (random == 0)
		{
			std::cout << this->target << " has been robotomized successfully" << std::endl;
		}
		else
		{
			std::cout << this->target << " has failed to be robotomized" << std::endl;
		}
		return 2;
	}
}