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
	double vc, v0, t, r, c, i;
};

#endif //DISCHARGE_CAPACITOR_H
