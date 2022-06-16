#include "driver.h"
#pragma once

class vehicle : public driver

{
private:
	string lic_num;
public:
	void setrokhsa(string);

	string getrokhsa();

};

