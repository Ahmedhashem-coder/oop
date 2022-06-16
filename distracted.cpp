#include <iostream>
#include "driver.h"
#include "vehicle.h"
#include "accident.h"
#include "Acc_data.h"
#include "distracted.h"
using namespace std;
void distracted::set_distract(string type) {
	if (type == "call"|| type=="texting"||type=="sleeping") {
		distract = type;
 }
	else
	{
		cout << "please enter a valid answer" << endl;
	}
}