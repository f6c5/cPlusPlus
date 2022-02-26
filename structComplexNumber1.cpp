#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct ComplexNumber{
	int Real=0;
	int Img=0;
	
	ComplexNumber Sum(ComplexNumber Sayi){
		ComplexNumber tmp;
		tmp.Real=Real+Sayi.Real;
		tmp.Img=Img+Sayi.Img;
		return tmp;
	}
	
	ComplexNumber Sub(ComplexNumber Sayi){
		ComplexNumber tmp;
		tmp.Real=Real-Sayi.Real;
		tmp.Img=Img-Sayi.Img;
		return tmp;
	}
	
	void Print(){
		cout<<"Z="<<Real<<"+i"<<Img<<endl;
	}
};



int main(int argc, char** argv) {
	ComplexNumber Sayi1,Sayi2;
	
	Sayi1.Real=1;
	Sayi1.Img=1;
	
	Sayi2.Real=2;
	Sayi2.Img=2;
	
	cout<<"Baslangicta Sayi1"<<endl;
	Sayi1.Print();
	
	ComplexNumber tmp;
	tmp=Sayi1.Sum(Sayi2);
	cout<<"Toplama islemi sonunda Sayi1"<<endl;
	tmp.Print();
	
	cout<<"Cikartma islemi sonunda Sayi1"<<endl;
	tmp=tmp.Sub(Sayi2);
	tmp.Print();
	return 0;
}
