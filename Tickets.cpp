#include<iostream>
#include<cstring>
using namespace std;

class Tickets
{
private:
	char ticketId[10], issuedDate[10], expiredDate[10], classType[10];

public:
	Tickets();
	Tickets(char tId[], char issDate[], char expDate[], char classTy[]);
	void addReservation();
	void displayTicketDetails();
	~Tickets();
};

Tickets::Tickets() {
	strcpy(ticketId, "");
	strcpy(issuedDate, "");
	strcpy(expiredDate, "");
	strcpy(classType, "");
}

Tickets::Tickets(char tId[], char tIsDate[], char tExDate[], char cType[]) {
	strcpy(ticketId, tId);
	strcpy(issuedDate, tIsDate);
	strcpy(expiredDate, tExDate);
	strcpy(classType, cType);
}

void Tickets::displayTicketDetails() {
	cout << "Ticket ID : " << ticketId << endl << "Issued Date : " << issuedDate << endl
		<< "Expired Date : " << expiredDate << endl << "Class Type : " << classType;
}

Tickets::~Tickets() {

}

