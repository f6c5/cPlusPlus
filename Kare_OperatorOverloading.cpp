#include<iostream>
using namespace std;
//Bu uygulama operator overloading kavramýný tanýtmak için kullanýldý
class Kare{
	private:
		int a;
	public:
		Kare(){a=1;
		}
		Kare(int a1){
			a=a1;
		}
		int alan(){
			return a*a;
		}
		void print(){
			cout<<"Kare Alani:"<<alan()<<endl;
		}
		Kare operator +(int n){
			return Kare(a+n);
		}
		bool operator >(Kare kx){
			if (this->alan()>kx.alan())
				return true;
			else 
				return false; 
		}
	
};
int main(){
	Kare k1(7);
	k1.print();
	Kare k2=k1+3;
	k2.print();
	Kare k3(15);
	if(k2>k3)
		cout<<"k2 nesnesi k3'den buyuktur";
	else
		cout<<"k2 nesnesi k3'den kucuktur";
     
}
