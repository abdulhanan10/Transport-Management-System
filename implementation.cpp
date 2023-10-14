//Class.cpp file (class source file)
#include "pch.h"
#include "interface.h"
//void readAndPrintData(string temp, string pass)
//{
//	ifstream obj1;
//
//	obj1.open("Admin.text",ios::app);
//
//while (!obj1.eof())
//
//obj1 >> temp;
//cout << temp << endl<<pass;
//
//} 
//
//
//void saveDataToFile(string temp)
//{
//	ofstream obj;
//
//	obj.open("Customer.text", ios::app);
//	obj << temp << endl;
//}
//
//int assign_ID_to_Customer(string ptr)
//{
//	int ID_conversion = 0;
//	ID_conversion = ID_conversion * 10 + 22 / 5 - 6 + rand() % 100;
//	//if (ID_conversion == "exits in file")
//	//{
//	//	ID_conversion = ID_conversion + rand() % 1000;
//	//}
//	return ID_conversion;
//}
//void Customer::setCustID(int custID)
//{
//	cId = custID;
//}
//int Customer::getCustID()
//{
//	return cId;
//}
//void Customer::customer_list(mTime time_obj[2], Person person_obj[2], Date date_obj[2], Customer customer_obj[2], Name name_obj[2])
//{
//	ofstream obj;
//	obj.open("customer.text");
//	obj << customer_obj[0].getNID() << endl << name_obj[0].getFName() << endl << name_obj[0].getLName() << endl << customer_obj[0].getAge() << endl;
//}
//void Name::setFName(string fN)
//{
//	fName = fN;
//}
//string Name::getFName()
//{
//	return fName;
//}
//void Name::setLName(string lN)
//{
//	lName = lN;
//}
//string Name::getLName()
//{
//	return lName;
//}
//void Person::setPName(Name pname)
//{
//	pName = pname;
//}
//Name Person::getPName()
//{
//	return pName;
//}
//void Date::setDate(int d)
//{
//	day = d;
//}
//int  Date::getDate()
//{
//	return day;
//}
//void Date::setMonth(int m)
//{
//	month = m;
//}
//int  Date::getMonth()
//{
//	return month;
//}
//void Date::setYear(int y)
//{
//	year = y;
//}
//int  Date::getYear()
//{
//	return year;
//}
//void mTime::setHour(int h)
//{
//	hour = h;
//}
//int  mTime::getHour()
//{
//	return hour;
//}
//void mTime::setMin(int m)
//{
//	minu = m;
//}
//int  mTime::getMin()
//{
//	return minu;
//}
//void mTime::setSec(int s)
//{
//	sec = s;
//}
//int  mTime::getSec()
//{
//	return sec;
//}
//void Person::setDOB(Date dob)
//{
//	DOB = dob;
//}
//Date Person::getDOB()
//{
//	return DOB;
//}
//void Person::setAge(int age)
//{
//	Age = age;
//}
//int  Person::getAge()
//{
//	return Age;
//}
//void Person::setNID( int nid)
//{
//	Nid = nid;
//}
// int  Person::getNID()
//{
//	return Nid;
//}
////void Customer::setBooingHistory(Service** bookingHist)
////{
////
////}
//	//void hackmenu()
//	//{
//	//	system("cls");
//	//	string ch = 4;
//	//	cout << "\t\t\t" << ch << fixed << setw(40) << left << "\tHack menu" << ch << endl;
//	//	cout << "\n\n\n\n\t\t\t" << string(48, 31) << endl;
//	//	cout << "\t\t\t" << ch << fixed << setw(40) << left << "\t1) stringnge level" << ch << endl;
//	//	cout << "\t\t\t" << ch << setw(40) << "\t2)  stringnge live" << ch << endl;
//	//	cout << "\t\t\t" << ch << setw(40) << "\t3)  stringnge speed" << ch << endl;
//	//	cout << "\t\t\t" << ch << setw(40) << "\t4)  stringnge score" << ch << endl;
//	//	cout << "\t\t\t" << string(48, 30) << endl;
//	//
//	//	switch (_getch())
//	//	{
//	//	case '1':
//	//	{
//	//		cout << "\n\n\n\t\t\tEnter level between 1-4 :";
//	//		cin >> level;
//	//		break;
//	//	}
//	//	case '2':
//	//	{
//	//		cout << "\n\n\n\t\t\tEnter lives of car :";
//	//		cin >> lives;
//	//		break;
//	//	}
//	//	case '3':
//	//	{
//	//		cout << "\n\n\n\t\tEnter speed how much you want to slow in milli seconds :";
//	//		cin >> speed;
//	//		break;
//	//	}
//	//	case '4':
//	//	{
//	//		cout << "\n\n\n\t\t\tEnter score of car :";
//	//		cin >> score;
//	//		break;
//	//	}
//	//	}
//	//}		
//void Driver::setDriverID(int driverID)
//{
//	dId = driverID;
//}
//int Driver::getDriverID()
//{
//	return dId;
//}
//void Driver::driver_list(Driver driver_obj[], Name name_obj[])
//{
//	ofstream obj;
//	obj.open("driver.text");
//	obj << driver_obj[0].getNID() << endl << name_obj[0].getFName() << endl << name_obj[0].getLName() << endl << driver_obj[0].getAge() << endl << driver_obj[0].getExperience() << endl << driver_obj[0].getLicenseList() << endl << driver_obj[0].getNoOFLicenses() << endl << driver_obj[0].getSalary() << endl << driver_obj[0].getStatus();
//}
//void Driver::setLicenseList(string** licenseList)
//{
//	LicencesList = licenseList;
//}
//string** Driver::getLicenseList()
//{
//	return LicencesList;
//}
//void Driver::setNoOFLicenses(int noOfLicense)
//{
//	noofLicences = noOfLicense;
//}
//int Driver::getNoOFLicenses()
//{
//	return noofLicences;
//}
//void Driver::setOverallRankings(float overallRank)
//{
//	overallRanking = overallRank;
//}
//float Driver::getOverallRanking()
//{
//	return overallRanking;
//}
//void Driver::setSalary(float sal)
//{
//	salary = sal;
//}
//float Driver::getSalary()
//{
//	return salary;
//}
//void Driver::setExperience(int exp)
//{
//	experience = exp;
//}
//int Driver::getExperience()
//{
//	return experience;
//}
//void Driver::setStatus(int statuses)
//{
//	status = statuses;
//}
//int Driver::getStatus()
//{
//	return status;
//}
//Name::Name() :fName(NULL), lName(NULL) { }
//Name::Name(string fN, string lN) :fName(fN), lName(lN) { }
//Name::~Name()
//{
//	cout << "Destructor called for Name" << endl;
//}
//Date::Date() :day(0), month(0), year(0) { }
//Date::Date(int d, int m, int y) :day(d), month(m), year(y) { }
//Date::~Date()
//{
//	cout << "Destructor called for Date" << endl;
//}
//mTime::mTime() :hour(0), minu(0), sec(0) { }
//mTime::mTime(int h, int m, int s) :hour(h), minu(m), sec(s) { }
//mTime::~mTime()
//{
//	cout << "Destructor called for mTime" << endl;
//}
//Service::Service() :source(NULL), destination(NULL), distance(0.0), bookingDate(), bookingTime(),
//status(false), fuelrate(0.0), cId(0), dId(0), vId(0) {
//
//}
//Service::Service(string src, string destn, float dist, Date bkDate, mTime bkTime, bool sts, float fuelRate, int customerID, int driverID, int vehichleID) :
//	source(src), destination(destn), distance(dist), bookingDate(bkDate), bookingTime(bkTime),
//	status(sts), fuelrate(fuelRate), cId(customerID), dId(driverID), vId(vehichleID) {
//
//}
//Service::~Service()
//{
//	cout << "Destructor called for Service" << endl;
//}
//void Service::setSource(string src)
//{
//	source = src;
//}
//string Service::getSource()
//{
//	return source;
//}
//void Service::setDestination(string destn)
//{
//	destination = destn;
//}
//string Service::getDestination()
//{
//	return destination;
//}
//void Service::setDistance(float dist)
//{
//	distance = dist;
//}
//float Service::getDistance()
//{
//	return distance;
//}
//void Service::setBookingDate(Date bkDate)
//{
//	bookingDate = bkDate;
//}
//Date Service::getBookingDate()
//{
//	return bookingDate;
//}
//void Service::setBookingTime(mTime bkTime)
//{
//	bookingTime = bkTime;
//}
//mTime Service::getBookingTime()
//{
//	return bookingTime;
//}
//void Service::setStatus(bool sts)
//{
//	status = sts;
//}
//bool Service::getStatus()
//{
//	return status;
//}
//void Service::setFuelRate(float fuelRate)
//{
//	fuelrate = fuelRate;
//}
//float Service::getFuelRate()
//{
//	return fuelrate;
//}
//void Service::setCustomerID(int customerID)
//{
//	cId = customerID;
//}
//int Service::getCustomerID()
//{
//	return cId;
//}
//void Service::setDriverID(int driverID)
//{
//	dId = driverID;
//}
//int Service::getDriverID()
//{
//	return dId;
//}
//void Service::setVehicleID(int vehichleID)
//{
//	vId = vehichleID;
//}
//int Service::getVehicleID()
//{
//	return vId;
//}
//Ride::Ride() :Service(), noofPassengers(0), rideType(NULL), DriverRanking(0.0), VehicleRanking(0.0) { }
//Ride::Ride(string src, string destn, float dist, Date bkDate, mTime bkTime, bool sts, float fuelRate,
//	int customerID, int driverID, int vehichleID, int noOfPssngr, string typeOfRide, float driverRank,
//	float vehicleRank) :
//	Service(src, destn, dist, bkDate, bkTime, sts, fuelRate, customerID, driverID, vehichleID),
//	noofPassengers(noOfPssngr), rideType(typeOfRide), DriverRanking(driverRank),
//	VehicleRanking(vehicleRank) {
//
//}
//Ride::~Ride()
//{
//	cout << "Destructor called for Ride" << endl;
//}
//void Ride::setNoOfPassengers(int noOfPssngr)
//{
//	noofPassengers = noOfPssngr;
//}
//int Ride::getNoOfPassengers()
//{
//	return noofPassengers;
//}
//void Ride::setRideType(string typeOfRide)
//{
//	rideType = typeOfRide;
//}
//string Ride::getRideType()
//{
//	return rideType;
//}
//void Ride::setDriverRanking(float driverRank)
//{
//	DriverRanking = driverRank;
//}
//float Ride::getDriverRanking()
//{
//	return DriverRanking;
//}
//void Ride::setVehicleRank(float vehicleRank)
//{
//	VehicleRanking = vehicleRank;
//}
//float Ride::getVehicleRank()
//{
//	return VehicleRanking;
//}
//Delivery::Delivery() :Service(), goodsWeight(0.0), goodsType(NULL) { }
//Delivery::Delivery(string src, string destn, float dist, Date bkDate, mTime bkTime, bool sts,
//	float fuelRate, int customerID, int driverID, int vehichleID, float weightOfGoods,
//	string typeOfGoods) :
//	Service(src, destn, dist, bkDate, bkTime, sts, fuelRate, customerID, driverID, vehichleID),
//	goodsWeight(weightOfGoods), goodsType(typeOfGoods) {
//
//}
//Delivery::~Delivery()
//{
//	cout << "Destructor called for Delivery" << endl;
//}
//void Delivery::setGoodsWeight(float weightOfGoods)
//{
//	goodsWeight = weightOfGoods;
//}
//float Delivery::getGoodsWeight()
//{
//	return goodsWeight;
//}
//void Delivery::setGoodsType(string typeOfGoods)
//{
//	goodsType = typeOfGoods;
//}
//string Delivery::getGoodsType()
//{
//	return goodsType;
//}
//Person::Person() :pName(), DOB(), Age(0), Nid(0) { }
//Person::Person(Name pname, Date dob, int age, int nid) :pName(pname), DOB(dob), Age(age), Nid(nid) { }
//Person::~Person()
//{
//	cout << "Destructor called for Person" << endl;
//}
//Customer::Customer() :Person(), cId(0) /*,bookingHistory(NULL)*/ { };
////Customer::Customer(Name pname, Date dob, int age, int nid, int custID, Service** bookingHist) :Person(pname, dob, age, nid), cId(custID), bookingHistory(bookingHist) 
////{
////}
//Customer::~Customer()
//{
//	cout << "Destructor called for Customer" << endl;
//}
////void Customer::setBooingHistory(Service** bookingHist)
////{
////	bookingHistory = bookingHist;
////}
////Service Customer::getBooingHistory()
////{
////	return **bookingHistory;
////}
//Driver::Driver() :Person(), dId(0), LicencesList(NULL), noofLicences(0), overallRanking(0.0), salary(0.0),
//experience(0), status(0) /*,serviceHistory(NULL)*/ {
//
//}
////Driver::Driver(Name pname, Date dob, int age, int nid, int driverID, string** licenseList, int noOfLicense,	float overallRank, float sal, int exp, int statuses, Service** serviceHist):Person(pname, dob, age, nid), dId(driverID), LicencesList(licenseList), noofLicences(noOfLicense),overallRanking(overallRank), salary(sal), experience(exp), status(statuses),serviceHistory(serviceHist) {
////
////}
//Driver::~Driver()
//{
//	cout << "Destructor called for Driver" << endl;
//}
//
//Feature::Feature() :fId(0), description(NULL), cost(0.0) { }
//Feature::Feature(int featureID, string desc, float costs) :fId(featureID), description(desc),
//cost(costs) {
//
//}
//Feature::~Feature()
//{
//	cout << "Destructor called for Features" << endl;
//}
//void Feature::setFID(int featureID)
//{
//	fId = featureID;
//}
//int Feature::getFID()
//{
//	return fId;
//}
//void Feature::setDescription(string desc)
//{
//	description = desc;
//}
//string Feature::getDescription()
//{
//	return description;
//}
//void Feature::setCost(float costs)
//{
//	cost = costs;
//}
//float Feature::getCost()
//{
//	return cost;
//}
//Vehicle::Vehicle() :vId(0), registrationNo(0), avgMileage(0.0), LicenceType(NULL), status(false),
//fueltype(NULL), overallRanking(0.0), manufacturingDate(), list(NULL), serviceHistory(NULL) {
//
//}
//Vehicle::Vehicle(int vehicleID, int registrationNumber, float avaerageMileage, string* licenseType, bool statuses, string* fuelType, float overallRank, Date mfgDate, Feature* lists, Service** serviceHist) :vId(vehicleID), registrationNo(registrationNumber),
//avgMileage(avaerageMileage), LicenceType(licenseType), status(statuses), fueltype(fuelType),
//overallRanking(overallRank), manufacturingDate(mfgDate), list(lists), serviceHistory(serviceHist) {
//
//
//}
//Vehicle::~Vehicle()
//{
//	cout << "Destructor called for Vehicle" << endl;
//}
//void Vehicle::setVehicleID(int vehicleID)
//{
//	vId = vehicleID;
//}
//int Vehicle::getVehicleID()
//{
//	return vId;
//}
//void Vehicle::setRegisterationNumber(int registerationNumber)
//{
//	registrationNo = registerationNumber;
//}
//int Vehicle::getRegisterationNumber()
//{
//	return registrationNo;
//}
//void Vehicle::setAverageMileage(float avaerageMileage)
//{
//	avgMileage = avaerageMileage;
//}
//float Vehicle::getavaerageMileage()
//{
//	return avgMileage;
//}
//void Vehicle::setLicenseType(string* licenseType)
//{
//	LicenceType = licenseType;
//}
//string Vehicle::getLicenseType()
//{
//	return *LicenceType;
//}
//void Vehicle::setStatus(bool statuses)
//{
//	status = statuses;
//}
//bool Vehicle::getStatus()
//{
//	return status;
//}
//void Vehicle::setFuelType(string* fuelType)
//{
//	fueltype = fuelType;
//}
//string Vehicle::getFuelType()
//{
//	return *fueltype;
//}
//void Vehicle::setOverallRank(float overallRank)
//{
//	overallRanking = overallRank;
//}
//float Vehicle::getOverallRanks()
//{
//	return overallRanking;
//}
//void Vehicle::setMfgDate(Date mfgDate)
//{
//	manufacturingDate = mfgDate;
//}
//Date Vehicle::getMfgDate()
//{
//	return manufacturingDate;
//}
//void Vehicle::setList(Feature* lists)
//{
//	list = lists;
//}
//Feature Vehicle::getList()
//{
//	return *list;
//}
//void Vehicle::setServiceHistory(Service** serviceHist)
//{
//	serviceHistory = serviceHist;
//}
//Service Vehicle::getServiceHistory()
//{
//	return **serviceHistory;
//}
//void readandprintdata()
//{
//	string str;
//	ifstream obj1;
//	obj1.open("customer.text", ios::app);
//	while (!obj1.eof())
//	{
//		obj1 >> str;
//		cout << str;
//	}
//}
