//Class.cpp file (class source file)
#include "interface1.h"
void menuHranking()
{
	int trash;
	float rank = 4.5;
	system("color fc");
	char ch = 2;
	char ch2 = 3;
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 150; j++)
		{
			cout << ch;
		}
		cout << endl;
	}

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
	cout << "\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t" << ch2 << setfill(ch2) << fixed << setw(50) << left << "" << ch2 << endl;
	cout << "\t\t\t\t\t" << ch2 << setfill(' ') << setw(50) << ' ' << ch2 << endl;
	cout << "\t\t\t\t\t" << ch2 << setw(50) << ' ' << ch2 << endl;
	cout << "\t\t\t\t\t" << ch2 << setw(50) << "                  ranking !" << ch2 << endl;
	cout << "\t\t\t\t\t" << ch2 << setw(50) << ' ' << ch2 << endl;
	cout << "\t\t\t\t\t" << ch2 << "                rank = " << setw(26) << rank << ch2 << endl;
	cout << "\t\t\t\t\t" << ch2 << setw(50) << ' ' << ch2 << endl;
	cout << "\t\t\t\t\t" << ch2 << setw(50) << ' ' << ch2 << endl;
	cout << "\t\t\t\t\t" << ch2 << setfill(ch2) << setw(50) << "" << ch2 << endl;

	while (true)
	{
		system("color ac");
		Sleep(500);
		system("color bc");
		Sleep(500);
		system("color 9c");
		Sleep(500);
		if (_kbhit())
		{
			trash = _getch();
			break;
		}


	}
}
void saveranking(float score)
{
	int rank[10] = { 0 };
	ifstream fin("ranking.text");
	if (fin.is_open())
	{
		for (int i = 0; i < 10; i++)
		{
			fin >> rank[i];
		}
		fin.close();
		int index = 11;
		for (int i = 0; i < 10; i++)
		{
			if (rank[i] < score)
			{
				index = i;
				for (int i = 9; i > index; i--)
				{
					rank[i] = rank[i - 1];
				}
				rank[index] = score;
				break;
			}
		}
		ofstream fout("ranking.text");
		for (int i = 0; i < 10; i++)
		{
			fout << rank[i] << endl;
		}
		fout.close();
		if (index == 0)
		{
			menuHranking();
		}

	}

}
void printHranking()
{

	ifstream fin("ranking.text");
	if (fin.is_open())
	{
		string text = " RAnking ";
		for (int j = 0; j < 1000; j++)
		{
			cout << text;
		}
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
		cout << "\n\n\n\n";
		char ch = 4;
		float num;
		cout << "\t\t\t\t\t" << setfill(ch) << fixed << setw(17) << left << "" << endl;
		cout << setfill(' ');
		cout << "\t\t\t\t\t" << ch << setw(15) << "" << ch << endl;
		for (int i = 1; i <= 10; i++)
		{
			fin >> num;
			cout << "\t\t\t\t\t" << ch << setw(3) << right << i << ")  " << left << setw(9) << num << ch << endl;
			cout << "\t\t\t\t\t" << ch << setw(15) << "" << ch << endl;
		}
		cout << "\t\t\t\t\t" << setfill(ch) << setw(17) << "" << endl;

	}

	fin.close();
	int trash = _getch();
}
void Vehicle::readvehicledata()
{
	ifstream obj1;
	string st;
	obj1.open("Vehicle.text", ios::app);

	while (!obj1.eof())
	{
		obj1 >> st;
		cout << st << endl;
	}
}

void Vehicle::savetovehiclefile(int registration_number,int mileage,int vehiclestatus,float ranking,int cost) {

	ofstream obj;
	obj.open("Vehicle.text",ios::app);
	if (obj.is_open()) {
		cout << "hello ";
		obj << "Registration number " << registration_number << endl;
		obj << "Mileage " << mileage << endl;
		obj << "Vehcicle status " << vehiclestatus << endl;
		obj << "Ranking " << ranking << endl;
		obj << "Cost of ride " << cost << endl;
		obj << "X----------x " << endl;
	}
	else {
		cout << "Can not open file ";
	}

}
void readAndPrintData(char* temp, char* pass)
{
	ifstream obj1;

	obj1.open("Admin.text", ios::app);

	while (!obj1.eof())

		obj1 >> temp;
	cout << temp << endl << pass;

}

void saveDataToFile(char* temp, char* pass)
{
	ofstream obj;
	obj.open("Customer.text", ios::app);
	obj << temp << endl;
}

int assign_ID_to_Customer(char** ptr)
{
	int ID_conversion = 0;
	ID_conversion = ID_conversion * 10 + 22 / 5 - 6 + rand() % 100;
	//if (ID_conversion == "exits in file")
	//{
	//	ID_conversion = ID_conversion + rand() % 1000;
	//}
	return ID_conversion;
}
void Customer::setCustID(int custID)
{
	cId = custID;
}
int Customer::getCustID()
{
	return cId;
}
void Customer::customer_list(mTime time_obj[2], Person person_obj[2],
	Customer customer_obj[2], Name name_obj[2])
{
	ofstream obj;
	obj.open("customer.text");
	obj << customer_obj[0].getNID() << endl << name_obj[0].getFName() << endl << name_obj[0].getLName()
		<< endl << customer_obj[0].getAge() << endl;
}
void Customer::readcustomerdata()
{
	ifstream obj1;
	string st;
	obj1.open("customer.text", ios::app);

	while (!obj1.eof())
	{
		obj1 >> st;
		cout << st << endl;
	}
}
void Name::setFName(char* fN)
{
	fName = new char[strlen(fN) + 1];
	strcpy_s(fName, strlen(fN) + 1, fN);
}
char* Name::getFName()
{
	return fName;
}
void Name::setLName(char* lN)
{
	lName = new char[strlen(lN) + 1];
	strcpy_s(lName, strlen(lN) + 1, lN);
}
char* Name::getLName()
{
	return lName;
}
void Person::setPName(Name pname)
{
	pName = pname;
}
Name Person::getPName()
{
	return pName;
}
void Date::setDate(int d)
{
	day = d;
}
int  Date::getDate()
{
	return day;
}
void Date::setMonth(int m)
{
	month = m;
}
int  Date::getMonth()
{
	return month;
}
void Date::setYear(int y)
{
	year = y;
}
int  Date::getYear()
{
	return year;
}
void mTime::setHour(int h)
{
	hour = h;
}
int  mTime::getHour()
{
	return hour;
}
void mTime::setMin(int m)
{
	minu = m;
}
int  mTime::getMin()
{
	return minu;
}
void mTime::setSec(int s)
{
	sec = s;
}
int  mTime::getSec()
{
	return sec;
}
void Person::setDOB(Date dob)
{
	DOB = dob;
}
Date Person::getDOB()
{
	return DOB;
}
void Person::setAge(int age)
{
	Age = age;
}
int  Person::getAge()
{
	return Age;
}
void Person::setNID(int nid)
{
	Nid = nid;
}
int  Person::getNID()
{
	return Nid;
}
//void Customer::setBooingHistory(Service** bookingHist)
//{
//
//}
	//void hackmenu()
	//{
	//	system("cls");
	//	char* ch = 4;
	//	cout << "\t\t\t" << ch << fixed << setw(40) << left << "\tHack menu" << ch << endl;
	//	cout << "\n\n\n\n\t\t\t" << char*(48, 31) << endl;
	//	cout << "\t\t\t" << ch << fixed << setw(40) << left << "\t1) char*nge level" << ch << endl;
	//	cout << "\t\t\t" << ch << setw(40) << "\t2)  char*nge live" << ch << endl;
	//	cout << "\t\t\t" << ch << setw(40) << "\t3)  char*nge speed" << ch << endl;
	//	cout << "\t\t\t" << ch << setw(40) << "\t4)  char*nge score" << ch << endl;
	//	cout << "\t\t\t" << char*(48, 30) << endl;
	//
	//	switch (_getch())
	//	{
	//	case '1':
	//	{
	//		cout << "\n\n\n\t\t\tEnter level between 1-4 :";
	//		cin >> level;
	//		break;
	//	}
	//	case '2':
	//	{
	//		cout << "\n\n\n\t\t\tEnter lives of car :";
	//		cin >> lives;
	//		break;
	//	}
	//	case '3':
	//	{
	//		cout << "\n\n\n\t\tEnter speed how much you want to slow in milli seconds :";
	//		cin >> speed;
	//		break;
	//	}
	//	case '4':
	//	{
	//		cout << "\n\n\n\t\t\tEnter score of car :";
	//		cin >> score;
	//		break;
	//	}
	//	}
	//}		
void Driver::setDriverID(int driverID)
{
	dId = driverID;
}
int Driver::getDriverID()
{
	return dId;
}
void Driver::savedataofdriverinfile(int driverID, int noOfLicense, float overallRank, float sal, int exp,
	int statuses)
{
	ofstream obj;
	obj.open("driver.text", ios::app);
	obj << "Driver id: "<<driverID << endl;
	obj << "Number of licenses: "<<noOfLicense << endl;
	obj << "Over all rank "<<overallRank << endl;
	obj << "Salary: "<<sal << endl;
	obj << "Experience: "<<exp << endl;
	obj << "Status: "<<statuses << endl;
	obj << "X-------X" << endl;
}
void Driver::updatesalary(int age, int exp, int c,char* ptr)
{
	Driver obj;
	float sal1 = age * exp * c * 10;
	obj.setSalary(sal1);
	string s = ptr;
	obj.savesalarytofile(s,sal1);
}
void Driver::savesalarytofile(string st,float sal)
{
	ofstream obj;
	obj.open("salary.text", ios::app);
	obj << endl;
	if (obj.is_open())
	{
		obj <<st<<"  :   " << sal;
		/*obj << "Name: " << name << endl;
		obj << "First Name: " << fname << endl;
		obj << "Last Name: " << lname << endl;
		obj << "Age: " << age << endl;
		obj << "Experience: " << expert << endl;
		obj << "National ID: " << NATIONAL_ID << endl;
		obj << "X----------------------X" << endl;*/
	}

}
void Driver::printsalary()
{
	ifstream obj1;
	string str;
	obj1.open("salary.text", ios::app);

	while (!obj1.eof())
	{
		obj1 >> str;
		cout << str;
	}
}

void Driver::readdataofdriverinfile()
{
	ifstream obj1;
	string d;
	obj1.open("driver.text", ios::app);
	while (!obj1.eof())
	{
		obj1 >> d;
		cout << d<<endl;
	}
}
void Driver::readdataoflicenseinfile()
{
	ifstream obj1;
	string d;
	obj1.open("license.text", ios::app);
	while (!obj1.eof())
	{
		obj1 >> d;
		cout << d << endl;
	}
}
void Driver::savemultiplelicensetofile(string st,int li)
{
	ofstream obj;
	obj.open("license.text", ios::app);
	obj << endl;
	if (obj.is_open())
	{
		obj << st << "  :   " << li;
	}


}
void Driver::driver_list(Driver driver_obj[], Name name_obj[])
{
	ofstream obj;
	obj.open("driver.text");
	obj << driver_obj[0].getNID() << endl << name_obj[0].getFName() << endl << name_obj[0].getLName()
		<< endl << driver_obj[0].getAge() << endl << driver_obj[0].getExperience() << endl
		<< driver_obj[0].getLicenseList() << endl << driver_obj[0].getNoOFLicenses() << endl
		<< driver_obj[0].getSalary() << endl << driver_obj[0].getStatus();
}
void Driver::setLicenseList(char*** licenseList)
{
	LicencesList = licenseList;
}
char*** Driver::getLicenseList()
{
	return LicencesList;
}
void Driver::setNoOFLicenses(int noOfLicense)
{
	noofLicences = noOfLicense;
}
int Driver::getNoOFLicenses()
{
	return noofLicences;
}
void Driver::setOverallRankings(float overallRank)
{
	overallRanking = overallRank;
}
float Driver::getOverallRanking()
{
	return overallRanking;
}
void Driver::setSalary(float sal)
{
	salary = sal;
}
float Driver::getSalary()
{
	return salary;
}
void Driver::setExperience(int exp)
{
	experience = exp;
}
int Driver::getExperience()
{
	return experience;
}
void Driver::setStatus(int statuses)
{
	status = statuses;
}
int Driver::getStatus()
{
	return status;
}
Name::Name() :fName(NULL), lName(NULL) { }
Name::Name(char* fN, char* lN) :fName(fN), lName(lN)
{
	fName = new char[strlen(fN) + 1];
	strcpy_s(fName, strlen(fN) + 1, fN);
	lName = new char[strlen(lN) + 1];
	strcpy_s(lName, strlen(lN) + 1, lN);
}
Name::~Name()
{
	cout << "Destructor called for Name" << endl;
}
Date::Date() :day(0), month(0), year(0) { }
Date::Date(int d, int m, int y) :day(d), month(m), year(y) { }
Date::~Date()
{
	cout << "Destructor called for Date" << endl;
}
mTime::mTime() :hour(0), minu(0), sec(0) { }
mTime::mTime(int h, int m, int s) :hour(h), minu(m), sec(s) { }
mTime::~mTime()
{
	cout << "Destructor called for mTime" << endl;
}
Service::Service() :source(NULL), destination(NULL), distance(0.0), bookingDate(), bookingTime(),
status(false), fuelrate(0.0), cId(0), dId(0), vId(0) {

}
Service::Service(char* src, char* destn, float dist, Date bkDate, mTime bkTime, bool sts, float fuelRate,
	int customerID, int driverID, int vehichleID) :
	source(src), destination(destn), distance(dist), bookingDate(bkDate), bookingTime(bkTime),
	status(sts), fuelrate(fuelRate), cId(customerID), dId(driverID), vId(vehichleID) {
	source = new char[strlen(src) + 1];
	strcpy_s(source, strlen(src) + 1, src);
	destination = new char[strlen(destn) + 1];
	strcpy_s(destination, strlen(destn) + 1, destn);
}
Service::~Service()
{
	cout << "Destructor called for Service" << endl;
}
void Service::setSource(char* src)
{
	source = src;
}
char* Service::getSource()
{
	return source;
}
void Service::setDestination(char* destn)
{
	destination = destn;
}
char* Service::getDestination()
{
	return destination;
}
void Service::setDistance(float dist)
{
	distance = dist;
}
float Service::getDistance()
{
	return distance;
}
void Service::setBookingDate(Date bkDate)
{
	bookingDate = bkDate;
}
Date Service::getBookingDate()
{
	return bookingDate;
}
void Service::setBookingTime(mTime bkTime)
{
	bookingTime = bkTime;
}
mTime Service::getBookingTime()
{
	return bookingTime;
}
void Service::setStatus(bool sts)
{
	status = sts;
}
bool Service::getStatus()
{
	return status;
}
void Service::setFuelRate(float fuelRate)
{
	fuelrate = fuelRate;
}
float Service::getFuelRate()
{
	return fuelrate;
}
void Service::setCustomerID(int customerID)
{
	cId = customerID;
}
int Service::getCustomerID()
{
	return cId;
}
void Service::setDriverID(int driverID)
{
	dId = driverID;
}
int Service::getDriverID()
{
	return dId;
}
void Service::setVehicleID(int vehichleID)
{
	vId = vehichleID;
}
int Service::getVehicleID()
{
	return vId;
}
Ride::Ride() :Service(), noofPassengers(0), rideType(NULL), DriverRanking(0.0), VehicleRanking(0.0) { }
Ride::Ride(char* src, char* destn, float dist, Date bkDate, mTime bkTime, bool sts, float fuelRate,
	int customerID, int driverID, int vehichleID, int noOfPssngr, char* typeOfRide, float driverRank,
	float vehicleRank) :
	Service(src, destn, dist, bkDate, bkTime, sts, fuelRate, customerID, driverID, vehichleID),
	noofPassengers(noOfPssngr), rideType(typeOfRide), DriverRanking(driverRank),
	VehicleRanking(vehicleRank) {

}
Ride::~Ride()
{
	cout << "Destructor called for Ride" << endl;
}
void Ride::setNoOfPassengers(int noOfPssngr)
{
	noofPassengers = noOfPssngr;
}
int Ride::getNoOfPassengers()
{
	return noofPassengers;
}
void Ride::setRideType(char* typeOfRide)
{
	rideType = typeOfRide;
}
char* Ride::getRideType()
{
	return rideType;
}
void Ride::setDriverRanking(float driverRank)
{
	DriverRanking = driverRank;
}
float Ride::getDriverRanking()
{
	return DriverRanking;
}
void Ride::setVehicleRank(float vehicleRank)
{
	VehicleRanking = vehicleRank;
}
float Ride::getVehicleRank()
{
	return VehicleRanking;
}
Delivery::Delivery() :Service(), goodsWeight(0.0), goodsType(NULL) { }
Delivery::Delivery(char* src, char* destn, float dist, Date bkDate, mTime bkTime, bool sts,
	float fuelRate, int customerID, int driverID, int vehichleID, float weightOfGoods,
	char* typeOfGoods) :
	Service(src, destn, dist, bkDate, bkTime, sts, fuelRate, customerID, driverID, vehichleID),
	goodsWeight(weightOfGoods), goodsType(typeOfGoods) {

}
Delivery::~Delivery()
{
	cout << "Destructor called for Delivery" << endl;
}
void Delivery::setGoodsWeight(float weightOfGoods)
{
	goodsWeight = weightOfGoods;
}
float Delivery::getGoodsWeight()
{
	return goodsWeight;
}
void Delivery::setGoodsType(char* typeOfGoods)
{
	goodsType = typeOfGoods;
}
char* Delivery::getGoodsType()
{
	return goodsType;
}
Person::Person() :pName(), DOB(), Age(0), Nid(0) { }
Person::Person(Name pname, Date dob, int age, int nid) :pName(pname), DOB(dob), Age(age), Nid(nid) { }
Person::~Person()
{
	cout << "Destructor called for Person" << endl;
}
Customer::Customer() :Person(), cId(0) /*,bookingHistory(NULL)*/ { };
//Customer::Customer(Name pname, Date dob, int age, int nid, int custID, Service** bookingHist) 
// :Person(pname, dob, age, nid), cId(custID), bookingHistory(bookingHist) 
//{
//}
Customer::~Customer()
{
	cout << "Destructor called for Customer" << endl;
}
//void Customer::setBooingHistory(Service** bookingHist)
//{
//	bookingHistory = bookingHist;
//}
//Service Customer::getBooingHistory()
//{
//	return **bookingHistory;
//}
Driver::Driver() :Person(), dId(0), LicencesList(NULL), noofLicences(0), overallRanking(0.0), salary(0.0),
experience(0), status(0) /*,serviceHistory(NULL)*/ {

}
//Driver::Driver(Name pname, Date dob, int age, int nid, int driverID, char*** licenseList, int noOfLicense, float overallRank, float sal, int exp, int statuses, Service** serviceHist):Person(pname, dob, age, nid), dId(driverID), LicencesList(licenseList), noofLicences(noOfLicense),overallRanking(overallRank), salary(sal), experience(exp), status(statuses),serviceHistory(serviceHist) {
//	LicencesList = new char** [strlen(**licenseList) + 1];
//	**LicencesList = strcpy(**LicencesList, **licenseList);
//}
Driver::~Driver()
{
	cout << "Destructor called for Driver" << endl;
}

Feature::Feature() :fId(0), description(NULL), cost(0.0) { }
Feature::Feature(int featureID, char* desc, float costs) :fId(featureID), description(desc),
cost(costs) {

}
Feature::~Feature()
{
	cout << "Destructor called for Features" << endl;
}
void Feature::setFID(int featureID)
{
	fId = featureID;
}
int Feature::getFID()
{
	return fId;
}
void Feature::setDescription(char* desc)
{
	description = desc;
}
char* Feature::getDescription()
{
	return description;
}
void Feature::setCost(float costs)
{
	cost = costs;
}
float Feature::getCost()
{
	return cost;
}
Vehicle::Vehicle() :vId(0), registrationNo(0), avgMileage(0.0), LicenceType(NULL), status(false),
fueltype(NULL), overallRanking(0.0), manufacturingDate(), list(NULL), serviceHistory(NULL) {

}
Vehicle::Vehicle(int vehicleID, int registrationNumber, float avaerageMileage, char** licenseType,
	bool statuses, char** fuelType, float overallRank, Date mfgDate, Feature* lists, Service** serviceHist)
	:vId(vehicleID), registrationNo(registrationNumber), avgMileage(avaerageMileage), LicenceType(licenseType),
	status(statuses), fueltype(fuelType), overallRanking(overallRank), manufacturingDate(mfgDate),
	list(lists), serviceHistory(serviceHist) {
	LicenceType = new char* [2];
	LicenceType[0] = new char[strlen(*licenseType) + 1];
	strcpy_s(LicenceType[0], strlen(*licenseType) + 1, *licenseType);

	fueltype = new char* [2];
	fueltype[0] = new char[strlen(*fuelType) + 1];
	strcpy_s(fueltype[0], strlen(*fuelType) + 1, *fuelType);
}
Vehicle::~Vehicle()
{
	cout << "Destructor called for Vehicle" << endl;
}
void Vehicle::setVehicleID(int vehicleID)
{
	vId = vehicleID;
}
int Vehicle::getVehicleID()
{
	return vId;
}
void Vehicle::setRegisterationNumber(int registerationNumber)
{
	registrationNo = registerationNumber;
}
int Vehicle::getRegisterationNumber()
{
	return registrationNo;
}
void Vehicle::setAverageMileage(float avaerageMileage)
{
	avgMileage = avaerageMileage;
}
float Vehicle::getavaerageMileage()
{
	return avgMileage;
}
void Vehicle::setLicenseType(char** licenseType)
{
	LicenceType = licenseType;
}
char* Vehicle::getLicenseType()
{
	return *LicenceType;
}
void Vehicle::setStatus(bool statuses)
{
	status = statuses;
}
bool Vehicle::getStatus()
{
	return status;
}
void Vehicle::setFuelType(char** fuelType)
{
	fueltype = fuelType;
}
char* Vehicle::getFuelType()
{
	return *fueltype;
}
void Vehicle::setOverallRank(float overallRank)
{
	overallRanking = overallRank;
}
float Vehicle::getOverallRanks()
{
	return overallRanking;
}
void Vehicle::setMfgDate(Date mfgDate)
{
	manufacturingDate = mfgDate;
}
Date Vehicle::getMfgDate()
{
	return manufacturingDate;
}
void Vehicle::setList(Feature* lists)
{
	list = lists;
}
Feature Vehicle::getList()
{
	return *list;
}
void Vehicle::setServiceHistory(Service** serviceHist)
{
	serviceHistory = serviceHist;
}
Service Vehicle::getServiceHistory()
{
	return **serviceHistory;
}
//void readandprintdata()
//{
//	char* str;
//	ifstream obj1;
//	obj1.open("customer.text", ios::app);
//	while (!obj1.eof())
//	{
//		obj1 >> str;
//		cout << str;
//	}
//}


bool Customer::searchforidpassword(string id, string pass)
{
	ifstream fin("Customer.txt");
	bool found = false;
	string line, storedid, storedpassword;
	if (fin.is_open())
	{
		while (getline(fin, line))
		{
			if (line.find("Customer id: " + id) != -1)
			{
				storedid = line.substr(line.find(" ") + 1);
			}
			else if (line.find("Customer password: " + pass) != -1)
			{
				storedpassword = line.substr(line.find(" ") + 1);
				if (id == storedid && pass == storedpassword)
				{
					cout << "Customer found ";
					fin.close();
					found = true;
					break;
				}
			}
		}
	}
	else
	{
		cout << "Can not open file\n";
	}
	return found;
}

void Customer::input()
{
	mTime time_obj[2];
	Date date_obj;
	Driver driver_obj[2];
	Customer customer_obj[2];
	Person person_obj[2];
	Name name_obj[2];
	string fname, lname, name;
	char* name_ptr, * fname_ptr, * lname_ptr, * fueltype, * licenscetype;
	int ID = 0, registernum = 0, day_num = 0, month_num = 0, year_num = 0, sec = 0, min = 0, hour = 0,
		age = 0, nid = 0, expert = 0, temp_for_experience = 0, count_age_temp = 0;
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
	cin >> nid;
	while (nid < 0)
	{
		cout << "please enter correct national ID  :  ";
		cin >> nid;
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
	customer_obj[0].setNID(nid);
	/*Person(name_obj[0], date_obj[0], age, ID);*/
	Name(fname_ptr, lname_ptr);
	name_obj[0].setFName(fname_ptr);
	name_obj[0].setLName(lname_ptr);
	//for (int i = 0; i < 2; i++)
	//{
	//	time_obj[i].setSec(sec);
	//	time_obj[i].setMin(min);
	//	person_obj[i].setDOB(date_obj);
	//	person_obj[i].setPName(name_obj[0]);
	//	date_obj.setMonth(month_num);
	//	date_obj.setYear(year_num);
	//	/*ID = assign_ID_to_Customer(name_ptr);*/
	//	customer_obj[i].setCustID(ID);
	//	customer_obj[i].setAge(age);
	//	customer_obj[i].setNID(nid);
	//	/*Person(name_obj[0], date_obj[0], age, ID);*/
	//	Name(fname_ptr, lname_ptr);
	//	name_obj[i].setFName(fname_ptr);
	//	name_obj[i].setLName(lname_ptr);
	//}
	//saveDataToFile
}
