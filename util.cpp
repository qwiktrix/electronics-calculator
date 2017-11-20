#include "util.h"

namespace util{

    /*--- Input String Functions ---*/
    // Empty string check
    bool isStrEmpty(const std::string &str) {
    	bool b;
    	return ((str == "") ? true : false);	
    }

    /*--- Math Functions -- */
    // e^x using Taylor Series 
    long double e(long double x) {
    	int acc = 20;		
    	long double ans = 1;
    	long double factorial = 1;
    	long double multiple = 1;

    	for (int i = 1; i <= acc; i++) {
	    factorial *= i;
   	    multiple *= x;
   	    ans += multiple/factorial;
  	}
   
    	return ans;
    }

}
