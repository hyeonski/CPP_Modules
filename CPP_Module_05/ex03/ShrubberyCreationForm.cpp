#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("Shrubbery Creation Form", 145, 137, target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref) : Form(ref)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	Form::operator=(ref);
	return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
    
    std::ofstream out(getTarget() + "_shrubbery");
    if (!out.is_open())
        throw ShrubberyCreationForm::FileOpenFailedException();

    out <<"                                              .       "<< std::endl;
    out <<"                                   .         ;        "<< std::endl;  
    out <<"      .              .              ;%     ;;         "<< std::endl;
    out <<"        ,           ,                :;%  %;          "<< std::endl;
    out <<"         :         ;                   :;%;'     .,   "<< std::endl;
    out <<",.        %;     %;            ;        %;'    ,;     "<< std::endl;
    out <<"  ;       ;%;  %%;        ,     %;    ;%;    ,%'      "<< std::endl;     
    out <<"   %;       %;%;      ,  ;       %;  ;%;   ,%;'       "<< std::endl;
    out <<"    ;%;      %;        ;%;        % ;%;  ,%;'         "<< std::endl;
    out <<"     `%;.     ;%;     %;'         `;%%;.%;'           "<< std::endl;
    out <<"      `:;%.    ;%%. %@;        %; ;@%;%'              "<< std::endl;    
    out <<"         `:%;.  :;bd%;          %;@%;'                "<< std::endl;            
    out <<"           `@%:.  :;%.         ;@@%;'                 "<< std::endl;    
    out <<"             `@%.  `;@%.      ;@@%;                   "<< std::endl;
    out <<"               `@%%. `@%%    ;@@%;                    "<< std::endl;
    out <<"                 ;@%. :@%%  %@@%;                     "<< std::endl;
    out <<"                   %@bd%%%bd%%:;                      "<< std::endl;    
    out <<"                     #@%%%%%:;;                       "<< std::endl;
    out <<"                     %@@%%%::;                        "<< std::endl;
    out <<"                     %@@@%(o);  . '                   "<< std::endl;    
    out <<"                     %@@@o%;:(.,'                     "<< std::endl;    
    out <<"                 `.. %@@@o%::;                        "<< std::endl;
    out <<"                    `)@@@o%::;                        "<< std::endl;
    out <<"                     %@@(o)::;                        "<< std::endl;
    out <<"                    .%@@@@%::;                        "<< std::endl;
    out <<"                    ;%@@@@%::;.                       "<< std::endl;
    out <<"                   ;%@@@@%%:;;;.                      "<< std::endl;
    out <<"               ...;%@@@@@%%:;;;;,..                   "<< std::endl;
    out.close();
}

const char* ShrubberyCreationForm::FileOpenFailedException::what() const throw()
{
	return ("Error: ShrubberyCreationForm: Opening File Failed!");
}