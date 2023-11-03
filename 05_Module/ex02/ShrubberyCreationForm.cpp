#include "ShrubberyCreationForm.hpp"
#include <fstream>

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default_Shruberry", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm()
{
	(void) copy;
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	(void) assign;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::ofstream MyFile("filename.txt");
		std::string tree = 
"                                  # #\### ####\n                                ### \\/#|### |/####\n                               ##\\/#/ \\||/##/_/##/_#\n                             ###  \\/###|/ \\/ # ###\n                           ##_\\_#\\_\\## | #/###_/_####\n                          ## #### # \\ #| /  #### ##/##\n                           __#_--###`  |{,###---###-~\n                                     \\ }{\n                                      }}{\n                                      }}{\n                                 ejm  {{}\n                                , -=-~{ .-^- _\n                                      `}\n                                       {";\n		MyFile << tree;
		MyFile.close();
	}
	else
	
}