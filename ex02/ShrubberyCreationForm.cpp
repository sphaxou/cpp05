#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &t): Form(145, 137, "Shrubbery", t)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): Form(src)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::action() const
{
    std::ofstream ofs((target + "_shrubbery").c_str());
	if (!ofs)
	{
		std::cerr << "Cannot open output file\n";
		return ;
	}
    ofs << "                                                         .\n";
    ofs << "                                              .         ;  \n";
    ofs << "                 .              .              ;%     ;;   \n";
    ofs << "                   ,           ,                :;%  %;   \n";
    ofs << "                    :         ;                   :;%;'     .,   \n";
    ofs << "           ,.        %;     %;            ;        %;'    ,;\n";
    ofs << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    ofs << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
    ofs << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
    ofs << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
    ofs << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
    ofs << "                    `:%;.  :;bd%;          %;@%;'\n";
    ofs << "                      `@%:.  :;%.         ;@@%;'   \n";
    ofs << "                        `@%.  `;@%.      ;@@%;         \n";
    ofs << "                          `@%%. `@%%    ;@@%;        \n";
    ofs << "                            ;@%. :@%%  %@@%;       \n";
    ofs << "                              %@bd%%%bd%%:;     \n";
    ofs << "                                #@%%%%%:;;\n";
    ofs << "                                %@@%%%::;\n";
    ofs << "                                %@@@%(o);  . '         \n";
    ofs << "                                %@@@o%;:(.,'         \n";
    ofs << "                            `.. %@@@o%::;         \n";
    ofs << "                               `)@@@o%::;         \n";
    ofs << "                                %@@(o)::;        \n";
    ofs << "                               .%@@@@%::;         \n";
    ofs << "                               ;%@@@@%::;.          \n";
    ofs << "                              ;%@@@@%%:;;;. \n";
    ofs << "                          ...;%@@@@@%%:;;;;,..\n";
    ofs.close();
}