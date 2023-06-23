#include "../inc/ShrubberyCreationForm.hpp"

/* CONSTRUCTORS */
ShrubberyCreationForm::ShrubberyCreationForm() : A_Form("Shrubbery Creation Form", 145, 137), _target("target X") {
	//std::cout << "Default ShrubberyCreationForm" << std::endl;
	return ;
};
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) {
	//std::cout << "Copied ShrubberyCreationForm" << std::endl;
	*this = src;
	return ;
};
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : A_Form("Shrubbery Creation Form", 145, 137), 
_target(target) {
	//std::cout << "Parametered ShrubberyCreationForm" << std::endl;
	return ;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destroyed" << std::endl;
    return ;
};

std::string ShrubberyCreationForm::getTarget() const {
	return this->_target;
};

/* OPERATORS OVERLOADS */
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs) {
	this->_target = rhs._target;
	return *this;
};
std::ostream & operator<<(std::ostream & flow, ShrubberyCreationForm const & F) {
    flow << "Form name: "<< F.getName() << std::endl;
	flow << "Target: "<< F.getTarget() << std::endl;
    if (F.isSigned() == true) 
        flow << "Status: signed." << std::endl;
    else
        flow << "Status: unsigned." << std::endl;
    flow << "Grade required for signing: " << F.getSignGrade() << std::endl;
    flow << "Grade required for executing: " << F.getExecGrade();
    return flow;
};

void ShrubberyCreationForm::action() const {
	std::ofstream	outfile;
	std::string		filename = this->_target + "_shrubbery";

	outfile.open(filename.c_str());
	if (outfile.fail())
		throw ExecFailException();
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⣸⣷⣦⡀⠀⠀⠀⠀⣿⢷⡄⠀⠀⠀⠀⠀⠀⢀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣧⡀⠀⠀⢹⣷⠈⢿⣆⠀⠀⠀⣿⠈⣿⡄⠀⠀⣀⡴⢶⣿⡟⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⣿⣇⠀⠀⠈⢻⣆⠘⣿⠀⠀⣀⣽⣧⣸⣿⣴⡞⣉⣰⡞⢻⡇⢸⡇⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣷⣶⣶⣷⣄⣿⠛⢷⣶⣿⣸⣿⣿⣤⣄⡀⠀⠉⠻⣿⣶⠞⢉⣽⡿⢿⣿⠛⠛⠋⠁⠀⢸⣇⣸⡿⢾⣿⡛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⣌⣿⠀⠹⣿⣦⠀⠙⣿⣿⠛⢷⣄⠉⠻⣿⠀⣀⢻⣷⡶⠛⠁⠀⢠⡇⠀⢠⣴⡄⠀⢸⡟⣫⣼⣿⣟⣛⣛⣛⣷⣦⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣬⣿⣿⡄⠀⣿⡟⠛⠶⠾⣿⡄⠀⠙⠛⠲⢿⣷⣿⠘⣿⠀⠀⠀⠀⣼⠁⠀⢸⡇⢻⣾⡿⠛⠋⠁⠀⠉⠉⠉⣿⠁⣨⠿⠛⢛⣿⠟⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⢠⣿⣷⣄⠈⣿⣍⠉⠛⠿⣶⣿⠃⠀⠀⠀⢸⣧⡀⠀⠀⠀⠀⠉⣿⡇⢿⣇⠀⠀⠀⣿⠀⠀⢸⡇⣸⡏⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣡⡤⠾⠋⠁⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⢀⣀⣿⡆⢿⡄⠈⠛⠶⠶⠶⠾⠿⣷⣄⠀⠀⠈⣿⣇⠀⠀⠀⠀⠀⣿⡇⠀⢿⣦⡀⠀⣿⠀⠀⠈⣷⣏⡀⠀⠀⠀⠀⠀⢀⣠⣾⠟⠉⠁⠀⢀⣠⣴⠶⢶⣶⣄⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⢸⣿⠻⣿⣼⡇⠀⠀⠀⠀⠀⠀⠀⠈⠻⢷⣦⣀⠘⢿⣆⠀⠀⠀⠀⣿⡇⠀⠀⠹⣧⣀⣿⠀⢠⡼⣿⡏⠻⣦⡀⢀⣤⣴⣿⣿⣥⣤⣤⣤⡶⣿⣿⡷⠶⠞⠛⠉⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠈⢿⣄⠈⢻⡇⠀⢀⣤⣶⣶⣦⡤⠀⠀⠀⠈⠛⠻⢿⣿⣷⣄⠀⠀⣿⡇⠀⠀⠀⢻⣿⣿⡾⠋⢠⣾⣷⣄⢸⡏⠉⠉⠀⠀⠀⠀⠀⠉⠻⣷⣄⠉⢻⣦⡄⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⢸⡿⣿⣿⠶⣤⣿⣾⡿⣤⣤⠾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠻⣷⣄⣿⣿⠀⠀⠀⠈⣿⣿⠀⠀⣸⠏⢹⡏⠛⣿⠀⠀⠀⠀⠀⠀⢀⣀⡴⠟⠉⠛⠻⠿⠇⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⢸⣧⠈⢿⣆⠀⠈⢿⣧⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⠀⠀⠀⠀⠀⠙⢿⣿⣿⡄⠀⠀⠀⢹⣿⣤⠾⢻⡆⠸⣇⠀⠀⣀⣀⣀⣤⠶⠾⣿⡛⢷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠹⣷⣬⣿⠀⠀⠀⠹⣷⣄⡀⢀⣴⣾⣛⣩⣿⠟⠁⠀⠀⠀⠀⠀⠀⢻⣿⣿⠀⢀⣤⣿⣿⠋⠀⠈⢳⣴⣿⡶⠿⠛⠉⠉⠀⠀⠀⠈⠿⣦⣙⣷⡄⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠙⣿⣤⣀⡀⠀⠀⠙⢿⣮⣉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣶⡿⠋⢹⣿⠀⣠⣶⠟⠻⢷⣤⣤⣀⣀⣀⣤⣄⡀⠀⠀⠀⠉⠉⠀⠀⢀⣤⡴⢶⡆⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠈⠙⠛⠛⠿⠷⠾⠿⣿⣦⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡿⠁⠀⢸⣿⣿⠋⠀⠀⠀⠀⠈⠉⠙⠛⠙⢻⡈⠛⣷⣄⠀⠀⢀⣴⣾⣯⣴⠾⠛⠃⠀" << std::endl;
	outfile << "⢀⣀⡀⠀⠀⠀⠀⣀⣤⡶⣦⣄⣀⠀⠀⠀⠉⠻⠿⢿⣿⣿⣿⣿⣿⣶⣦⣤⣀⢸⣿⣇⠀⠀⣾⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⣷⣦⣨⣿⠶⢾⣿⣿⠿⠿⣦⣀⡀⠀⠀" << std::endl;
	outfile << "⢸⣏⡙⢷⣦⡀⠈⠽⠶⠶⠶⠿⢿⣀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⠙⢿⣿⣿⣿⣿⠀⢀⣿⣿⠀⣀⣀⣀⣀⣤⣤⣶⡶⠾⢿⣟⢿⡍⠉⠀⢀⣿⣿⠉⠳⠶⣄⣹⣷⡄⠀" << std::endl;
	outfile << "⠀⠙⠷⣶⣾⣿⠀⠀⠀⠀⠀⠀⠀⠙⢿⣦⣤⣤⣀⣀⣀⣠⣤⣤⣤⣤⣀⠀⠙⢿⣿⡟⠀⣼⣿⣿⣿⢿⣿⣿⣟⠛⠛⠉⠀⠀⢈⣿⠀⣿⣄⣀⣿⡏⣼⡇⠀⠀⠀⠉⠉⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⢈⣟⠻⢷⣦⣤⣤⣤⣤⣤⣤⡶⠿⠿⠛⠛⠛⠛⠋⠙⠛⠛⠻⢿⣿⣦⣼⣿⣇⣼⣿⠛⠁⠀⠀⠀⠉⠛⠛⢻⣿⣿⠛⠛⠻⣷⣿⠋⠉⠻⣿⣿⣧⣤⣶⡶⠶⣤⣄⡀" << std::endl;
	outfile << "⠀⠀⢀⣾⠿⣦⠀⠀⠀⠀⠀⠀⣠⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⢸⡟⢹⣷⠀⠀⠀⠉⠀⠀⠀⠉⠀⠻⣿⡈⠻⣶⣴⠿⠟" << std::endl;
	outfile << "⠀⠀⢸⣇⢠⣿⠀⠀⠀⠀⠀⠀⣿⡜⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⢸⣇⣾⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣦⣬⣷⡄⠀" << std::endl;
	outfile << "⠀⠀⠈⠻⣾⡋⠀⠀⠀⠀⠀⠀⠘⢿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠁⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⣿⣿⣿⣿⣿⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⡿⠛⠻⣿⣍⠛⠿⣿⣿⣷⣶⣶⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠿⠿⠿⠛⠋⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⠈⠹⠟⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile.close();
	std::cout << "Executing " << this->getName() << std::endl;
}