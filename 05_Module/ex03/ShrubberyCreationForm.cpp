#include "ShrubberyCreationForm.hpp"
#include <fstream>

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("default_Shruberry", 145, 137), target("default_target")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: AForm("default_Shruberry", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm()
{
	this->target = copy.target;
	(void) copy;
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	this->target = assign.target;
	return *this;
}

int ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
	{
		return 1;
	}
		if (executor.getGrade() <= this->getGradeToExecute())
		{
			std::ofstream MyFile((this->target + "_shrubbery").c_str());
			std::string tree = 
"         # #\\### ####\n        ### \\/#|### |/####\n       ##\\/#/ \\||/##/_/##/_#\n     ###  \\/###|/ \\/ # ###\n   ##_\\_#\\_\\## | #/###_/_####\n  ## #### # \\ #| /  #### ##/##\n   __#_--###`  |{,###---###-~\n             \\ }{\n              }}{\n              }}{\n              {{}\n        , -=-~{ .-^- _\n              `}\n               {";
			MyFile << tree;
			MyFile.close();
			return 2;
		}
		else
		{
			throw AForm::GradeTooLowException();
		}
	
}
