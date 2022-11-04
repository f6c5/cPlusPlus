#include<iostream>
using namespace std;

int main(){
	int a=9;
	int *p;
	p=&a;
	*p=*p+100;
	cout<<"a="<<a<<endl;
	cout<<"p="<<p<<endl;
	p++;
	cout<<"p="<<p<<endl;
	int & b=a;
	cout<<"b="<<b<<endl;
	b=b-9;
	cout<<"a="<<a<<endl;
	
}
