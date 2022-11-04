#include<iostream>

using namespace std;

class student{
	public:
	
	string name;

	void tell(){
	cout << name<<endl;
	}
};

int main(){
	
	student std1;
	std1.name = "ferhat";
	std1.tell();

	return 0;
}
