#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// Constructors
Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
}


// Destructor
Intern::~Intern()
{
}


// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

AForm  *Intern::makeForm(std::string formName, std::string target)
{
	std::string Forms_names[3] = {
		"shrubbery creation", 
		"robotomy request", 
		"presidential pardon"
		};
	
	AForm *form[3] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
		};

	for (int i = 0; i < 3; i++)
	{
		if (formName == Forms_names[i])
		{
			for (int x = 0; x < 3; x++)
			{
				if (x != i)
					delete form[x];
			}
			std::cout <<
				"Intern creates " << formName << std::endl;
			return form[i];
			
		}
	}

	std::cout << "Intern: I couldn't find that form name...." << std::endl;
	return NULL;
}	


