#ifndef UTIL_H
#define UTIL_H
#include <iostream>
#include <iomanip>
#include <string>

namespace util{

/*--- Input String Functions ---*/
// Empty string check
bool isStrEmpty(const std::string &str);

/*--- Math Functions -- */
// e^x using Taylor Series 
long double e(long double x);

}

#endif //UTIL_H
