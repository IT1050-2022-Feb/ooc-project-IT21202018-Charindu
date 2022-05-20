#include<iostream>
#include<cstring>
using namespace std;

class Vaccination
{
private: 
	int vacId;
	char vacType[20];
public:
	Vaccination();
	Vaccination(int vId, char vType[]);
	void displayVaccinationDetails();
	~Vaccination();
};

Vaccination::Vaccination() {
	vacId = 0;
	strcpy(vacType, "");
}

Vaccination::Vaccination(int vId, char vType[]) {
	vacId = vId;
	strcpy(vacType, vType);
}

void Vaccination::displayVaccinationDetails() {
	cout << "Vaccination ID : " << vacId << endl << "Vaccination Type : " << vacType;
}

Vaccination::~Vaccination() {

}
