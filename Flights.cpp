#include<iostream>
#include<cstring>
using namespace std;

class Flights
{
private: 
	int flightId;
	char flightDestination[20];
public:
	Flights();
	Flights(int fID, char fDestination[]);
	void displayFlightsDetails();
	~Flights();
};

Flights::Flights() {
	flightId = 0;
	strcpy(flightDestination, "");
}

Flights::Flights(int fID, char fDestination[]) {
	flightId = fID;
	strcpy(flightDestination, fDestination);
}

void Flights::displayFlightsDetails() {
	cout << "Vaccination ID : " << flightId << endl << "Vaccination Type : " << flightDestination;
}

Flights::~Flights() {

}
