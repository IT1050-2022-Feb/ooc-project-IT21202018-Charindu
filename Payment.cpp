#include<iostream>
#include<cstring>
using namespace std;

class Payment
{
private: 
	int paymentId;
	char paymentMethod[20];
	double amount;
public:
	Payment();
	Payment(int pid, char pmethod[], double amm);
	void displayPaymentDetails();
	~Payment();
};

Payment::Payment() {
	paymentId = 0;
	strcpy(paymentMethod, "");
	amount = 0.00;
}

Payment::Payment(int pid, char pmethod[], double amm) {
	paymentId = pid;
	strcpy(paymentMethod, pmethod);
	amount = amm;
}


void Payment::displayPaymentDetails() {
	cout << "Payment ID : " << paymentId << endl << "Payment Method : " << paymentMethod << endl
		<<"Amount : " << amm;
}

Payment::~Payment() {

}
