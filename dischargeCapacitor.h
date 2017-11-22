#ifndef DISCHARGE_CAPACITOR_H
#define DISCHARGE_CAPACITOR_H
#include "util.h"

class dischargeCapacitor {
    public:
       	dischargeCapacitor();
	~dischargeCapacitor() {};

    private:
	void initVar();
	void calcCapacitorVoltage();
	void calcCapacitorCurrent();
	void calcPowerOfResistor();
	void setTime(double time);
	double vc, v0, t, r, c, i, p;
};

#endif //DISCHARGE_CAPACITOR_H
