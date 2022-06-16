#ifndef ACC_DATA_H
#define ACC_DATA_H
#include <iostream>
#include "vehicle.h"
#include "accident.h"
using namespace std;


class acc_data : public accident,public vehicle // inherted from 3 classes

{
private:
	string country;
	int roc;  // risk of crash

public:
	// setters and getters
	void setcountry(string);
	string getcountry();
	// 4 accidents categories as nested classes
	class drink_acc {  //drinking accident
		private: 
			bool alchol;
			int count;
		public:
			
			drink_acc() {
				count = count + 1;
				cout << count;
			}
			void set_alc(bool x) {
				if (x == 1)
				{
					alchol = true;
				}
				else {
					
					alchol = false;
				}
			};
			int get_alc() {
				return alchol;
			};
	};
	class distracted_acc {
		private:
			string distract;
			int count;
		public:
			distracted_acc() {
				count = count + 1;
			}
			void set_distract(string type) {
				while (type == "call" || type == "texting" || type == "sleeping") {
				
					distract = type;
			
					
				}
			};
			string get_distract() {
				return distract;

			};


	};
	class safety_acc {
		private:
		
			string safe;
			int count;
		public:
			 safety_acc() {
				 count = count + 1;

			}
			 void setsafety(string x) {
				 if (x == "helmet" || x == "belt") {
					 safe = x;
				 }
				
				 }
			string get_safety() {
					 return safe;
			}
	};
	class speed_acc {
		private:
			int speed;
			int max_speed =80;
			int count=0;

		public:
			
			speed_acc() {
				count = count + 1;
				
			}
			int get_counter() {
				return count;
			}
			void setspeed(int x) {
				if (x > max_speed) {
					speed = x;
				}
				else {
					cout << "speed is suitbale" << endl;
				}
			}
			int get_speed() {
				return speed;
			}

	};
};
#endif
