#include "dischargeCapacitor.h"

int main() {
    std::cout << "Electronics Calculator is now starting up...\n" << std::endl;
    std::string input;
    bool exit = false;
    bool sel;

    // Main Application Loop
    while (!exit){
  	sel = false;
	std::cout << "==========================================" << std::endl;
    	std::cout << "| Welcome to  the Electronics Calculator |" << std::endl;
    	std::cout << "==========================================" << std::endl;
	std::cout << " Please enter the number option for what you" << std::endl;
    	std::cout <<	" would like to do." << std::endl;
    	std::cout << "---------------------------" << std::endl;
    	std::cout << "OPTIONS:\n[1] - Capacitor Discharge" << std::endl;
    	std::cout << " X  - to Exit" << std::endl;
    	std::cout << "---------------------------" << std::endl;
        
	// Input Selection Loop
	while (!sel) {
	    std::getline(std::cin, input); 	
            if (input == "1" || input == "[1]") {
  	    	dischargeCapacitor calc;
		sel = true;
            } else if (input == "X" || input == "x") {
	    	exit = true;
		sel = true;
            } else {
            	std::cout << "Sorry that is not a valid option." << std::endl;
   	    	std::cout << "Please select one of the available options" << std::endl;
		std::cout << "above or X to exit. " << std::endl;
            }

	}
    }

}


