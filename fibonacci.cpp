#include<iostream>
using namespace std;

int main(){
	long double x1,x2,x3,i,n;
	cout<<"Fibonacci dizisinin terimleri"<<endl;
	x1=0;
	x2=1;
	cout<<"Bir terim sayisi giriniz.";
	cin>>n;
	if(n==1)
	cout<<x1<<endl;
	else
	cout<<x1<<endl<<x2<<endl;
	for(i=2;i<n;i++)
	{
		x3=x1+x2;
		cout<<x3<<endl;
		x1=x2;
		x2=x3;
	}
	//system("pause");
	return 0;
}
