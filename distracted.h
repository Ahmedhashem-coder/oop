#pragma once
#include <iostream>
#ifndef DISTRACTED_H
#define DISTRACTED_H
using namespace std;
#include "Acc_data.h"

class distracted : public acc_data{
private:
	string distract;
public:
	void set_distract(string);
	string get_distract();

};

#endif