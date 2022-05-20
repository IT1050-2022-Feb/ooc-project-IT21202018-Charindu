#include<iostream>
#include<cstring>
using namespace std;

class customer{
	private:
		char customerName[], char customerID[], char nic[];
		double contactNumber;
	   
	public:
		Customer();
		Customer(char cName[], char cID[], char nic[], double cNo);
		char getCustomerName();
		char getNIC();
		char getContactNo();
		void displayCustomerDetails();
		~Customer();
}


Customer::Customer() {
	customerName = "";
	nic = "";
	contactNo = "";
}
	
Customer::Customer(char cName[], char cID[], char nic[], double cNo) {
	customerName = cName;
	customerID = cID;
	nic = nic;
	contactNo = cNo;
}

char Customer::getCustomerName() {
	return customerName;
}

char Customer::getNIC() {
	return nic;
}

double Customer::getContactNo() {
	return conctactNo;
}

void Customer::displayCustomerDetails(){
	cout << "Customer ID :" <<customerID<< endl << "Customer Name :" << customerName << endl
		<<"NIC : " << nic << endl << "Contact No : " << contactNo;
}



Customer::~Customer()  {
}
