#include "RobotomyRequestForm.hpp"
#include <cstdlib>

// Constructors
RobotomyRequestForm::RobotomyRequestForm() : AForm("default_robotomy", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm()
{
	(void) copy;
}


// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
}


// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	(void) assign;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(NULL));
	int random = rand() % 2;
	try {
		if (executor.getGrade() > this->getGradeToExecute())
		{
			throw AForm::GradeTooLowException();
		}
		else
		{
			if (random == 0)
			{
				std::cout << "Bureaucrat " << executor.getName() << " has been robotomized successfully" << std::endl;
			}
			else
			{
				std::cout << "Bureaucrat " << executor.getName() << " has failed to be robotomized" << std::endl;
			}
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}