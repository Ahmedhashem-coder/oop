#include <iostream>
#ifndef ACCIDENT_H
#define ACCIDENT_H


using namespace std;
class accident
{
private:
	string road_location;
	int date_T;
	int no_vehicles;
	int no_casualties;

public:
	void setroad(string);// setter for the road
	string getroad();//getter for the road

	void setdatetime(int, int, int);//setter for date and time
	int getdatetime(); // getter for the date and time

	void set_no_vec(int); // setter for the number of vehicles
	int get_no_vec(); // getter for the number of the vehicles

	void set_cas(int); //setter for the number of the casualties
	int get_cas();// getter for the number of the casualties
};
#endif

