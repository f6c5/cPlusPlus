#include <iostream>
using namespace std;
int main()
{
	string c;
	int a,b,d;
	cout<<"bir sayi gir: "<<endl;
	cin>>a;
	cout<<"bir sayi gir: "<<endl;
	cin>>b;
	cout<<"isemi yaz: "<<endl;
	cin>>c;
	if(c=="toplama")
	{
		cout<<"sonuc: "<<a+b<<endl;
	}
	if(c=="cikarma")
	{
		cout<<"sonuc: "<<a-b<<endl;
	}
	if(c=="carpma")
	{
		cout<<"sonuc: "<<a*b<<endl;
	}
	if(c=="bolme")
	{
		cout<<"sonuc: "<<a/b<<endl;
	}
	
	return 0;
}

