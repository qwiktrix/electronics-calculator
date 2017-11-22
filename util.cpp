#include "util.h"

namespace util{

    /*--- Input String Functions ---*/
    // Empty string check
    bool isStrEmpty(const std::string &str) {
    	bool b;
    	return ((str == "") ? true : false);	
    }

}
