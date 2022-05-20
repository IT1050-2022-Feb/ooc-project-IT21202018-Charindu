#include<iostream>
#include<cstring>
using namespace std;

class Passport
{
private: 
	char passportId[10], passportIssueDate[10], passportExpDate[10];
public:
	Passport();
	Passport(char passid[], char passIssDate[], char passExpDate[]);
	void displayPassportDetails();
	~Passport();
};

Passport::Passport() {
	strcpy(passportId, "");
	strcpy(passportIssueDate, "");
	strcpy(passportExpDate, "");
}

Passport::Passport(char pid[], char passIssDate[], char passExpDate[]) {
	strcpy(passportId, pid);
	strcpy(passportIssueDate, passIssDate);
	strcpy(passportExpDate, passExpDate);
}

void Passport::displayPassportDetails() {
	cout << "Passport ID : " << passportId << endl << "Passport Issue Date : " << passportIssueDate << endl
		<< "Passport Expiry Date : " << passportExpDate;
}

Passport::~Passport() {

}
