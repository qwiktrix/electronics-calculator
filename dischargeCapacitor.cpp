#include "dischargeCapacitor.h"

dischargeCapacitor::dischargeCapacitor() {
    initVar();
    calcCapacitorVoltage();       
        
}

void dischargeCapacitor::initVar() {
    // Input Prompt
    std::cout << "\nCapacitor Discharge Calculation" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Please input your variable values or ENTER to use default values." << std::endl;
	
    // Get Inputs for all variables
    std::string input;
    std::cout << "t: Time t in seconds (3 s) ";
    std::getline(std::cin, input);
    ((util::isStrEmpty(input)) ? t = 3.0 : t = std::stod(input));
    std::cout << t << " " << "secs"; 

    std::cout << "\nR: Resistance of resistor needed for capacitor discharge in ohms (1 ohm) ";
    std::getline(std::cin, input);
    ((util::isStrEmpty(input)) ? r = 1.0 : r = std::stod(input));
    std::cout << r << " " << "ohms";

    std::cout << "\nC: Capacitance of capacitor in farads (1 F) ";
    std::getline(std::cin, input);
    ((util::isStrEmpty(input)) ? c = 1.0 : c = std::stod(input));
    std::cout << c << " " << "F";

    std::cout << "\nV0: Voltage in a fully charged capacitor in volts (1 V) ";
    std::getline(std::cin, input);
    ((util::isStrEmpty(input)) ? v0 = 1.0 : v0 = std::stod(input));
    std::cout << v0 << " " << "V\n";

    vc = 0;
    i = 0;
}

void dischargeCapacitor::calcCapacitorVoltage() {
    vc = v0 * util::e(-(t/(r*c)));
    std::cout << ("V(%d) =", time) << std::setprecision(15) << vc << " V" << std::endl;
}

