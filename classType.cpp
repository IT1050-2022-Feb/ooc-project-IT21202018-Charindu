#include<iostream>

using namespace std;

class classType{
	private:
		int classTypeID;
		string classTypeName;
		
	public:
		classType();
		classType(int classID,string className);
		void displayClassTypeDetails();
		~classType();
		
};

classType::classType()
{
	classTypeID =001;
	classTypeName="sanath";
}

classType::classType(int classID,string className)
{
	
	classTypeID=classID;
	classTypeName=className;
}

void classType::displayClassTypeDetails()
{
	cout<<"class type id = "<<classTypeID<<endl;
	cout<<"class type name = "<<classTypeName<<endl;
}

classType::~classType() {	
}

int main()
{
	classType ct1;
	ct1.displayClassTypeDetails();
}
