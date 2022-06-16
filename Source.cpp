#include <iostream>
#include "driver.h"
#include "vehicle.h"
#include "accident.h"
#include "Acc_data.h"
#include <fstream>
#include <cstdlib>
using namespace std;
	int drink;
	int distracted;
	int safety;
	int speed;
	int maxa;
	int maxb;
	int most_frequent;
	int highway; //global variable
	int urbanarea; //global variable
	int press;
	acc_data d; // object  for the accident data
	driver l; //object for the driver
int main()
{	
	
	cout << "do you want to add data or read data?" << endl;
	cout << "for writing press 1" << endl << "for reading press 2"<<endl;
	cin >> press;
	if (press == 1) {
		string responce; //let the user to continue or end
		//i will make it by a do while loop
		do {

			cout << "enter the accident report" << endl << endl;
			
			ofstream myfile; //object file
			myfile.open("report.txt", ios::out);// write in the file
			string country; //country
			cout << "what is the country" << endl;
			cin >> country;
			d.setcountry(country);
			myfile << "country : \t" << d.getcountry() << endl;

			
					// object for the file

			string name; // name of the driver 
			cout << "please enter the name:";
			cin >> name;

			l.setname(name);
			// open the file

			myfile << "name" << "\t\t" << l.getname() << endl;
			// close the file



			int age; // age of the driver
			cout << "enter the age:";
			cin >> age;
			l.setage(age);
			if (age > 0) {

			}
			myfile << "age" << "\t\t" << l.getage() << endl;
			int x = l.getage();



			string gender;
			cout << "what is the gender : ";
			cin >> gender;
			l.setgender(gender);
			myfile << "gender" << "\t\t" << l.getgender() << endl;

			int day;
			int month;
			int year;
			//checker for the date
			do {
				cout << "when was your issue date : " << endl;
				cin >> day;

				cin >> month;

				cin >> year;
				l.setissue(day, month, year);


			} while (year > 2021 & month > 12 & day > 31);
			myfile << "issue date\t" << l.getissue() << "/" << month << "/" << year << endl;


			accident acc; //object for the accident class
			int locrep; //variable for the location choose
			string location;
			cout << "please choose the location" << endl;
			cout << "1-urban area		2-high way" << endl;
			cin >> locrep;



			if (locrep == 1) {
				urbanarea++;
				location = "urban area";
				acc.setroad(location);
				myfile << "location\t" << acc.getroad() << endl;


			}
			if (locrep == 2) {
				highway++;
				location = "high way";
				acc.setroad(location);
				myfile << "location\t" << acc.getroad() << endl;
			}




			vehicle v; // object for the vehicle

			string rokhsa;
			cout << "please enter the liscence number :";
			cin >> rokhsa;
			v.setrokhsa(rokhsa);
			myfile << "license number" << "\t" << v.getrokhsa() << endl;


			acc_data::speed_acc spd;
			acc_data::distracted_acc dis;
			acc_data::safety_acc saf;
			acc_data::drink_acc dr;
			int cat; //category represent
			cout << "choose the category from the following numbers" << endl;
			cout << "1-speed\n2-distracted\n3-safety\n4-drunk" << endl;
			cin >> cat;
			if (cat == 1) {
				speed++;
				myfile << "category\tspeed" << endl;
				int speed;
				cout << "please enter the speed " << endl;
				cin >> speed;
				spd.setspeed(speed);
				myfile << "speed\t\t" << spd.get_speed() << endl;
			}
			else if (cat == 2) {
				distracted++;
				myfile << "category\tdistracted" << endl;
				string type;
				cout << "what is the distraction" << endl;
				cin >> type;
				dis.set_distract(type);
				myfile << "distraction\t" << dis.get_distract() << endl;
			}
			else if (cat == 3) {
				safety++;
				myfile << "category\tsafety" << endl;
				string safe;
				cout << "what is the safety problem" << endl;
				cin >> safe;
				saf.setsafety(safe);
				myfile << "safety\t\t" << saf.get_safety() << endl;

			}
			else if (cat == 4) {
				drink++;
				myfile << "category\tdrinking" << endl;
				bool z;
				cout << "was he/she drunk?\t1=yes\t2=no" << endl;
				cin >> z;
				if (z == 1) {
					dr.set_alc(z);
					myfile << "alchol\t\t positive" << endl;
				}
				else
				{
					myfile << "alchol\t\t negative" << endl;
				}

			}
			else
			{
				cout << "please enter a valid number" << endl;
			}

			int no_vec; // number of vehicles in the accident
			cout << "enter the number of the vehicles in the accidents " << endl;;
			cin >> no_vec;
			acc.set_no_vec(no_vec);
			myfile << "no. of vehicles\t" << acc.get_no_vec() << endl;




			cout << "do you want to enter another report" << endl << "yes or no:  ";
			cin >> responce;
			myfile.close();

		} while (responce == "yes" || responce == "Yes");
		ofstream myfile2; // asking for next report
		myfile2.open("report.txt", ios::app);
		myfile2 << "total cases in urbanarea : " << urbanarea << "\t\t\t\ttotal cases in highway : " << highway << endl;
		myfile2.close();
		ofstream myfile3; // for the most frequent accident
		myfile3.open("report.txt", ios::app);
		if (speed > safety) {
			maxa = speed;
			myfile3<<"speed accident\t "<<speed<<endl;
		}
		else if (safety>speed){
			maxa = safety;
			myfile3 << "safety accidents\t" << safety << endl;

		}
		if (distracted > drink) {
			maxb  = distracted;
			myfile3 << "distracted accidents\t " << distracted << endl;

		}
		else if (drink > distracted) {
			maxb = drink;
			myfile3 << "drink accidents " << drink << endl;

		}
		
		
	}
	
};


