#include <iostream>
#include "driver.h"
#include "vehicle.h"
#include "Acc_data.h"
#include <fstream>
using namespace std;

void acc_data::setcountry(string c) {
	country = c;
}
string acc_data::getcountry()
{
	return country;
}
