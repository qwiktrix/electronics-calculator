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
    p = 0;
}

void dischargeCapacitor::setTime(double time) {
    t = time;
}

void dischargeCapacitor::calcCapacitorVoltage() {
    std::cout << "\n\n-----------------------------------" << std::endl;
    std::cout << "Calculating Capacitor Voltage V(t)..." << std::endl;
    std::string input;

    // Ensure no divide by 0 error for RC
    while (r == 0 || c == 0) {
	std::cout << "\n\nInvalid time constant RC must be greater than 0" << std::endl;
	std::cout << "Please input an resistor R and capacitor C value greater than 0 or ENTER for \ndefault 1 Ohm/1 F\n" << std::endl;
	
	std::cout << "\nR: Resistance of resistor needed for capacitor discharge in ohms (1 ohm) " << std::endl;
	std::getline(std::cin, input);
    	((util::isStrEmpty(input)) ? r = 1.0 : r = std::stod(input));
    	std::cout << r << " " << "Ohms"; 
	
	std::cout << "\nC: Capacitance of capacitor in farads (1 F)" << std::endl;
	std::getline(std::cin, input);
    	((util::isStrEmpty(input)) ? c = 1.0 : c = std::stod(input));
    	std::cout << c << " " << "F"; 
    }

    vc = v0 * std::exp(-(t/(r*c)));
    std::cout << "\n\n Voltage in Capacitor at time, t: \n";
    std::cout << "V(t) = V(0)e^(-t/(RC)) \n";
    std::cout << ("V(%d) =", time) << std::setprecision(15) << vc << " V" << std::endl;
}

void dischargeCapacitor::calcCapacitorCurrent() {
    std::cout << "\n\nCalculating Instantaneous Capacitor Current I(t)..." << std::endl; 

    // Ensure no divide by 0 error for R   
    while (r == 0) {
	std::string input;	
	std::cout << "\n\nInvalid resistor R value must be greater than 0" << std::endl;
	std::cout << "Please input an resistor R value greater than 0 or ENTER for default 1 Ohm \nR: ";
	std::getline(std::cin, input);
    	((util::isStrEmpty(input)) ? r = 1.0 : t = std::stod(input));
    	std::cout << t << " " << "Ohms"; 
    }

     i = vc/r;
}

