#include <iostream>
#include "driver.h"
#include "vehicle.h"
#include "accident.h"
#include "Acc_data.h"
#include <fstream>

using namespace std;

void driver::setgender(string g) {
	gender = g;
}

string driver::getgender() {
	
		return gender;
	
	
}

void driver::setname(string n) 
{

	name = n;
};

string driver::getname()
{
	return name;
};

void driver::setage(int x) {
	age = x;

}
int driver::getage() {

	return age;

}
void driver::setissue(int x,int y, int z) {
	lic_iss_date = x,y,z;
}
int driver::getissue() {
	return  lic_iss_date;
}