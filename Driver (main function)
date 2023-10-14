//main file (source.cpp)
#include<iostream>
#include<string>
#include<iomanip>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include"interface1.h"
using namespace std;
const int size_temp = 2;
static int temp_static_index = 0;
int main()
{
	srand(time(0));
	mTime time_obj[2];
	mTime time_obj2;
	Date date_obj;
	Driver driver_obj[2];
	Customer customer_obj[2];
	Person person_obj[2];
	Name name_obj[2];
	Date date_obj1(1, 1, 2002);
	mTime mTime_obj(0, 0, 0);
	Feature features_obj;
	Vehicle vehicle_obj[2];
	Service** serviceHistory_obj, service_obj;
	Service* serviceHistory_obj2;
	Ride ride_obj;
	Delivery delivery_obj;
	long long int NATIONAL_ID = 0;
	int ID = 0, registernum = 0, day_num = 0, month_num = 0, year_num = 0, sec = 0, min = 0, hour = 0,
		age = 0, nid = 0, expert = 0, temp_for_experience = 0, count_age_temp = 0, featureID = 0,
		featureCost = 0, vehicleID = 0, customerID = 0, temp_use = 0, book_var = 0,sal=4000,nooflicense=0;
	string fname, lname, name, featureDescription;
	char* name_ptr, * fname_ptr, * lname_ptr, ** fueltype_ptr, ** licenscetype_ptr, * featureDescription_ptr;
	float ranknum = 0.0, mileage = 0, temp_float = 0;
	bool run = true;
	bool vehicleStatus, temp_bool;
	char* fuelType, * licenseType, * temp_ptr=NULL;
	string cid, cpass;
	licenscetype_ptr = &licenseType;
	fueltype_ptr = &fuelType;
	serviceHistory_obj = &serviceHistory_obj2;
	char ch = 4;

	while (run)
	{
		//system("cls");
		system("color fc");
		cout << "\n\n\n\n\t\t\t" << string(88, 31) << endl;
		cout << "\t\t\t" << ch << setw(80) << left << "\t1) Add a new customer" << ch << endl;
		cout << "\t\t\t" << ch << setw(80) << "\t2) Add or remove a driver" << ch << endl;
		cout << "\t\t\t" << ch << setw(80) << "\t3) Add or remove a vehicle" << ch << endl;
		cout << "\t\t\t" << ch << setw(80) << "\t4) Print list of all drivers having multiple licenses " << ch << endl;
		cout << "\t\t\t" << ch << setw(80) << "\t5) Print List of all drivers" << ch << endl;
		cout << "\t\t\t" << ch << setw(80) << "\t6) Print complete list of vehicles with details by their category." << ch << endl;
		cout << "\t\t\t" << ch << setw(80) << "\t7) Print list of all drivers who have ranking above 4.5." << ch << endl;
		cout << "\t\t\t" << ch << setw(80) << "\t8) Print lists" << ch << endl;
		cout << "\t\t\t" << ch << setw(80) << "\t9) Exit" << ch << endl;
		cout << "\t\t\t" << string(88, 30) << endl;
		switch (_getch())
		{
		case '1':
		{
			system("cls");
			cout << "please enter your C_data  : ";
			cin >> name;
			name_ptr = &name[0];
			cout << "please enter your first name  :   ";
			cin >> fname;
			fname_ptr = &fname[0];
			cout << "please enter your last name  :   ";
			cin >> lname;
			lname_ptr = &lname[0];
			cout << "please enter the day  :  ";
			cin >> day_num;
			while (day_num <= 1 && day_num >= 31)
			{
				cout << "^-^  please enter the correct day  :  ";
				cin >> day_num;
			}
			cout << "please enter the month  :  ";
			cin >> month_num;
			while (month_num <= 1 && month_num >= 12)
			{
				cout << "^-^  please enter the correct month :  ";
				cin >> month_num;
			}
			cout << "please enter the year  :  ";
			cin >> year_num;
			while (year_num <= 1 && year_num >= 2024)
			{
				cout << "^-^  please enter the correct year :  ";
				cin >> year_num;
			}
			cout << "please enter the seconds  :  ";
			cin >> sec;
			while (sec <= 1 && sec >= 60)
			{
				cout << "^-^  please enter the correct seconds :  ";
				cin >> sec;
			}

			cout << "please enter the minutes  :  ";
			cin >> min;
			while (min <= 1 && min >= 60)
			{
				cout << "^-^  please enter the correct minutes  :  ";
				cin >> min;
			}

			cout << "please enter the hours  :  ";
			cin >> hour;
			while (hour <= 1 && hour >= 24)
			{
				cout << "^-^  please enter the correct hour :  ";
				cin >> hour;
			}
			time_obj[0].setHour(hour);

			cout << "please enter your age   :  ";
			cin >> age;
			while (age <= 1 && age >= 200)
			{
				cout << "^-^   please enter your age   :  ";
				cin >> age;
			}
			cout << "please enter your national id  :  ";
			cin >> NATIONAL_ID;
			while (NATIONAL_ID < 0)
			{
				cout << "please enter correct national ID  :  ";
				cin >> NATIONAL_ID;
			}
			time_obj[0].setSec(sec);
			time_obj[0].setMin(min);
			person_obj[0].setDOB(date_obj);
			person_obj[0].setPName(name_obj[0]);
			date_obj.setMonth(month_num);
			date_obj.setYear(year_num);
			/*ID = assign_ID_to_Customer(name_ptr);*/
			customer_obj[0].setCustID(ID);
			customer_obj[0].setAge(age);
			customer_obj[0].setNID(NATIONAL_ID);
			/*Person(name_obj[0], date_obj[0], age, ID);*/
			Name(fname_ptr, lname_ptr);
			name_obj[0].setFName(fname_ptr);
			name_obj[0].setLName(lname_ptr);
			customer_obj->customer_list(time_obj, person_obj, customer_obj, name_obj);
			cout << "Do you want to book a vehicle : \n 1.For ride  :   \n2.For Transport Goods  :  \n3.exit  :  ";
			cin >> book_var;
			switch (book_var)
			{
			case 1:
			{
				cout << "please enter no. of passengers :  ";
				cin >> temp_use;
				ride_obj.setNoOfPassengers(temp_use);
				cout << "  please  enter ride type  :  ";
				cin >> temp_ptr;
				ride_obj.setRideType(temp_ptr);
				cout << "  please enter source  :   ";
				cin >> temp_ptr;
				service_obj.setSource(temp_ptr);
				cout << "  please enter Destination  :   ";
				cin >> temp_ptr;
				service_obj.setDestination(temp_ptr);
				cout << "  please enter Distance  :   ";
				cin >> temp_use;
				service_obj.setDistance(temp_use);
				cout << "  please enter FuelRate:   ";
				cin >> temp_float;
				service_obj.setFuelRate(temp_float);
				cout << "  which Driver do you want :  ";
				cin >> temp_static_index;
				cout << "  please enter status  :   ";
				cin >> temp_bool;
				service_obj.setStatus(temp_bool);
				if (temp_bool == true)
				{
					cout << "   please enter driver ranking : ";
					cin >> temp_float;
					ride_obj.setDriverRanking(temp_float);
					driver_obj[temp_static_index].setOverallRankings(temp_float);
					cout << "   please enter Vehicle ranking : ";
					cin >> temp_float;
					ride_obj.setVehicleRank(temp_float);
					vehicle_obj[0].setOverallRank(temp_float);
				}
				break;
			}
			case 2:
			{

				cout << "please enter Goods weight :  ";
				cin >> temp_use;
				delivery_obj.setGoodsWeight(temp_use);
				cout << "  please  enter Goods type  :  ";
				cin >> *temp_ptr;
				delivery_obj.setGoodsType(temp_ptr);
				cout << "  please enter source  :   ";
				cin >> *temp_ptr;
				service_obj.setSource(temp_ptr);
				cout << "  please enter Destination  :   ";
				cin >> *temp_ptr;
				service_obj.setDestination(temp_ptr);
				cout << "  please enter status  :   ";
				cin >> temp_bool;
				service_obj.setStatus(temp_bool);
				cout << "  please enter Distance  :   ";
				cin >> temp_use;
				service_obj.setDistance(temp_use);
				cout << "  please enter FuelRate:   ";
				cin >> temp_float;
				service_obj.setFuelRate(temp_float);
				break;
			}
			case 3:
			{
				break;
			}
			default:
				cout << "   wrong input   ";
				break;
			}
			break;
		}
		case '2':
			{
			Driver d;
				system("cls");
				cout << "please enter your D_data  : ";
				cin >> name;
				name_ptr = &name[0];
				cout << "please enter your first name  :   ";
				cin >> fname;
				fname_ptr = &fname[0];
				cout << "please enter your last name  :   ";
				cin >> lname;
				lname_ptr = &lname[0];
				cout << "please enter your age   :  ";
				cin >> age;
				while (age <= 18 && age >= 200)
				{
					/*if (count_age_temp > 3)
					{
						break;
					}*/
					cout << "^-^   please enter your age i.e exceptable for driver otherwise you're not eligible :  ";
					cin >> age;
					//count_age_temp++;
				}
				temp_for_experience = age - 10;
				cout << "please enter your experience   :  ";
				cin >> expert;
				temp_for_experience = age-10;
				while (expert> temp_for_experience)
				{
					cout << "^-^   please enter your age   :  ";
					cin >> age;
					cout << "please enter your experience   :  ";
					cin >> expert;
					temp_for_experience = age - 10;
				}
				cout << "please enter your national id  :  ";
				cin >> NATIONAL_ID;
				while (NATIONAL_ID < 0)
				{
					cout << "please enter correct national ID  :  ";
					cin >> NATIONAL_ID;
				}
			 cout << "Please enter the overall ranking of the driver : ";
			cin >> ranknum;
			while (ranknum < 0 && ranknum > 5)
			{
				cout << "Please enter the correct ranking of the driver otherwise not allowed : ";
				cin >> ranknum;
			}
				cout << "Enter number of licnses ";
				cin >> nooflicense;
				while (nooflicense < 0)
				{
					cout << "please enter correct license count :  ";
					cin >> nooflicense;
				}
				ID = 1538;
				driver_obj[0].setDriverID(ID);
				name_obj[0].setFName(fname_ptr);
				name_obj[0].setLName(lname_ptr);
				driver_obj[0].setPName(name_obj[0]);
				driver_obj[0].setAge(age);
				driver_obj[0].setExperience(expert);
				//////driver_obj[0].setLicenseList();
				driver_obj[0].setNID(NATIONAL_ID);
				driver_obj[0].setNoOFLicenses(nooflicense);
				driver_obj[0].setOverallRankings(0);
				driver_obj[0].setSalary(0);
				driver_obj[0].setStatus(0);
				driver_obj->driver_list(driver_obj, name_obj);
			driver_obj[0].setOverallRankings(ranknum);
			string s = fname_ptr;
			driver_obj[0].savemultiplelicensetofile(s, nooflicense);
			saveranking(ranknum);
			driver_obj[0].updatesalary(age, expert, 1, fname_ptr);
			driver_obj[0].savedataofdriverinfile( ID,  2, ranknum, sal, expert,1);
	break;
			}
		case '3':
		{
			Vehicle c;
			system("cls");
			cout << "please enter vehicle registration number   :  ";
			cin >> registernum;
			cout << "please enter vehicle avg mileage  :  ";
			cin >> mileage;
			//cout << "please enter vehicle licensetype  :  ";
			///*	cin >> licenscetype;*/
			//cin.ignore();
			//cout << "please enter vehicle fuel type  :  ";
			/*cin >> fueltype;*/
			cin.ignore();
			//licenscetype_ptr = &licenseType;
			//cout << "please enter vehicle licensetype  :  ";
			//cin.get(*licenseType);
			//vehicle_obj[0].setLicenseType(&licenseType);
			////cin.ignore();
			////fueltype_ptr = &fuelType;
			//cout << "please enter vehicle fuel type  :  ";
			//cin.get(*fuelType);
			//vehicle_obj[0].setFuelType(&fuelType);
			//cin.ignore();
			cout << "Enter the status of vehicle (0 for 'yes, availabale', 1 for 'no, not available'): ";
			cin >> vehicleStatus;

			if (vehicleStatus == false)
			{
				cout << "This vehicle is free for service" << endl;
			}
			else
			{
				cout << "This vehicle is not free, this vehicle is already booked" << endl;
			}
			cout << "please enter the day  :  ";
			cin >> day_num;
			while (day_num <= 1 && day_num >= 31)
			{
				cout << "^-^  please enter the correct day  :  ";
				cin >> day_num;
			}
			cout << "please enter the month  :  ";
			cin >> month_num;
			while (month_num <= 1 && month_num >= 12)
			{
				cout << "^-^  please enter the correct month :  ";
				cin >> month_num;
			}
			cout << "please enter the year  :  ";
			cin >> year_num;
			while (year_num <= 1999 && year_num >= 2024)
			{
				cout << "^-^  please enter the correct year > 1999 otherwise not allowed :  ";
				cin >> year_num;
			}
			//setVehicleID(int vehicleID);

			cout << "Please enter the overall ranking of the vehicle : ";
			cin >> ranknum;
			while (ranknum < 0 && ranknum > 5)
			{
				cout << "Please enter the correct ranking of the vehicle otherwise not allowed : ";
				cin >> ranknum;
			}
			cout << "Please enter the features of the vehicle : ";
			for (int i = 0; i < 2; i++)
			{
				cout << "The feature ID of the vehicle : ";
				cin >> featureID;
				cout << "The cost of this feature : ";
				cin >> featureCost;
				cout << "The description of the feature : ";
				cin >> featureDescription;
				featureDescription_ptr = &featureDescription[i];
			}
			cout << "please enter the seconds  :  ";
			cin >> sec;
			while (sec <= 1 && sec >= 60)
			{
				cout << "^-^  please enter the correct seconds :  ";
				cin >> sec;
			}

			cout << "please enter the minutes  :  ";
			cin >> min;
			while (min <= 1 && min >= 60)
			{
				cout << "^-^  please enter the correct minutes  :  ";
				cin >> min;
			}
			cout << "please enter the hours  :  ";
			cin >> hour;
			while (hour <= 1 && hour >= 24)
			{
				cout << "^-^  please enter the correct hour :  ";
				cin >> hour;
			}
			time_obj2.setHour(hour);
			time_obj2.setSec(sec);
			time_obj2.setMin(min);
			cout << "Please enter the service history of the vehicle : ";

			vehicle_obj[0].setVehicleID(vehicleID);
			vehicle_obj[0].setRegisterationNumber(registernum);
			vehicle_obj[0].setAverageMileage(mileage);
			vehicle_obj[0].setFuelType(fueltype_ptr);
			vehicle_obj[0].setLicenseType(licenscetype_ptr);
			date_obj.setDate(day_num);
			date_obj.setMonth(month_num);
			date_obj.setYear(year_num);
			features_obj.setFID(featureID);
			features_obj.setCost(featureCost);
			features_obj.setDescription(featureDescription_ptr);
			vehicle_obj[0].setList(&features_obj);
			vehicle_obj[0].setMfgDate(date_obj);
			vehicle_obj[0].setOverallRank(ranknum);
			vehicle_obj[0].setStatus(vehicleStatus);
		/*	serviceHistory_obj2->setBookingDate(date_obj);
			serviceHistory_obj2->setBookingTime(time_obj2);
			serviceHistory_obj2->setVehicleID(vehicleID);
			serviceHistory_obj2->setDriverID(ID);
			serviceHistory_obj2->setCustomerID(customerID);*/
			//vehicle_obj[0].setServiceHistory();
			vehicle_obj[0].savetovehiclefile(registernum, mileage, vehicleStatus, ranknum, featureCost);
			break;
		}
		case '4':
		{
			system("cls");
			/*while (ID!=4)
			{
				for (int i = 0; i < size_temp; i++)
				{
					cout << "please enter your id :  ";
					cin >> ID_string;
					cout << "please enter password :  ";
					cin >> passwordvar;
					check = person_obj[i].searchforidpassword(ID_string, passwordvar);
					if (check)
					{
						cout << "your data found ";
					}
					else { cout << "you entered a wrong data\n  please enter 4 to exit otherwise any number  :  "; }
					cin >> ID;

				}*/
			
			driver_obj[0].readdataoflicenseinfile();
				
			
			break;
		}
		/*readandprintdata();*/

		case '5':
		{
			////add a vehicle 
			//cout << "  enter vehicle registration number  :  ";
			//cin >> temp_use;
			//vehicle_obj[temp_static_index].setRegisterationNumber(temp_use);
			//cout << "  enter vehicle avgmileage  :  ";
			//cin >> temp_float;
			//vehicle_obj[temp_static_index].setAverageMileage(temp_float);
			//cout << "  enter vehicle status  :  ";
			//cin >> temp_use;
			//vehicle_obj[temp_static_index].setStatus(temp_use);
			//vehicle_obj[temp_static_index].setMfgDate(date_obj);
			driver_obj[0].readdataofdriverinfile();
			break;
		}
		case '6':
		{
			vehicle_obj[0].readvehicledata();

			break;
		}
		case '7':
		{
			printHranking();
			break;
		}
		case '8':
		{	
			system("cls");
			cout << "\n\n\n\n\t\t\t" << string(88, 31) << endl;
			cout << "\t\t\t" << ch << setw(80) << "\t1) Print List of all  Customers" << ch << endl;
		cout << "\t\t\t" << ch << setw(80) << "\t2) Print updated salary of all drivers" << ch << endl;
		cout << "\t\t\t" << ch << setw(80) << "\t3) Print complete details and service history of a particular vehicle" << ch << endl;
		//	cout << "\t\t\t" << ch << setw(80) << "\t6) Print Customers, who used the same vehicle different date" << ch << endl;
		//	cout << "\t\t\t" << ch << setw(80) << "\t7) Print the List of all Drivers who completed delivery services on same days" << ch << endl;
			switch (_getch())
			{
			case '1':
			{
				customer_obj[0].readcustomerdata();

				break;
			}
			case '2':
			{
				driver_obj[0].printsalary();

				break;
			}
			case '3':
			{
				vehicle_obj[0].readvehicledata();

				break;
			}

			case '4':
			{
				break;
			}
			}

			break;
		}
		

		//case 'f':
		//{
		//	if (_getch() == 'a')
		//	{
		//		if (_getch() == 'n')
		//		{
		//			if (_getch() == 'd')
		//			{
		//				if (_getch() == 'h')
		//				{
		//					//hackmenu();
		//				}

		//			}

		//		}

		//	}
		//	break;
		//}
		//default:
		//{
		//	cout << "\n\n\n\t\t\tWrong Input";
		//}

		//}


		/*string* data = new string * [2];
		for (int z = 0; z < 2; z++)
		{
			data[z] = new string[2];
		}
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cin >> *(*(data + i) + j);
			}
		}//
		savedatatofile();*/
		/*	for (int k = 0; k < 2; k++)
			{
				delete[]data[k];
			}
			delete[]data;*/
			/*savedatatofile();*/

		}

	}
}
	
