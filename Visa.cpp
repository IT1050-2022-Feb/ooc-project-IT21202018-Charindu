#include<iostream>
#include<cstring>
using namespace std;

class Visa
{
private: 
	string visaID, visaType, issuedDate, expiredDate;
public:
	Visa();
	Visa(string vid, string vtype, string visdate, string vexdate);
	string getVisaId();
	string getVisaType();
	string getIssuedDate();
	string getExpiredDate();
	void displayVisaDetails();
	~Visa();
};

Visa::Visa() {
	visaID = "";
	visaType = "";
	issuedDate = "";
	expiredDate = "";
}

Visa::Visa(string vid, string vtype, string visdate, string vexdate) {
	visaID = vid;
	visaType = vtype;
	issuedDate = visdate;
	expiredDate = vexdate;
}

string Visa::getVisaId() {
	return visaID;
}

string Visa::getVisaType() {
	return visaType;
}

string Visa::getIssuedDate() {
	return issuedDate;
}

string Visa::getExpiredDate() {
	return visaID;
}

void Visa::displayVisaDetails() {
	cout << "Visa ID : " << visaID << endl << "Visa Type : " << visaType << endl
		<<"Visa Issued Date : " << issuedDate << endl << "Visa Expired Date : " << expiredDate;
}

Visa::~Visa() {

}
