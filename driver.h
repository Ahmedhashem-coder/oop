#ifndef DRIVER_H
#define DRIVER_H

#include <iostream>
using namespace std;
#pragma once



class driver
{
	private:
		string name;
		int age;
		string gender;
		int lic_iss_date;

	public:
	
		void setname(string);
		string getname();

		void setgender(string);
		string getgender();


		void setage(int);
		int getage();
	
	

	
		int getissue();
		void setissue(int, int, int);

	 
};
#endif
