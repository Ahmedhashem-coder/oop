#include <iostream>
#include "driver.h"
#include "vehicle.h"
#include "accident.h"
#include "Acc_data.h"
#include <fstream>
void vehicle::setrokhsa(string x) {
	lic_num = x;

}
string vehicle::getrokhsa() {
	return lic_num;
}