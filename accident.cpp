#include "accident.h"
#include <iostream>
#include "driver.h"
#include "vehicle.h"
#include <fstream>
using namespace std;



void accident::setroad(string x) {
	if( x=="high way"||x=="urban area" )
	{ road_location = x; }
}
	string accident::getroad() {
	return road_location;



}void accident::setdatetime(int x,int y,int z) {
	date_T = x,y,z;
	}
	int accident::getdatetime() {
	return date_T;
	}


void accident::set_cas(int x) {
	if (x >=  0) {
	no_casualties = x;
	}
	else
	{
		cout << "please enter a valid number" << endl;
	}
	}
	int accident::get_cas(){
	return no_casualties;
	}



void accident::set_no_vec(int x) {
	if (x>0){no_vehicles = x;}
	else
	{
		cout << "please enter a valid number" << endl;
	}
	}
	int accident::get_no_vec() {
	
	return no_vehicles;
	}