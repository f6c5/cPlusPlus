#include <iostream>
using namespace std;

class Point{
	private:
		int x,y;
	public:
		Point(){
			x=0; y=0; //fabrika ayarlar�
		}
		Point(int x1,int y1){
			x=x1; y=y1;
		}
		void print();  //sadece deklerasyon i�erik s�n�f�n d���nda yaz�lacak
		 void setX(int x1){x=x1;
		}
		int getX(){return x;
		}
		//Point(Point &p){  //Copy constructor genellikle derleyici taraf�ndan sa�lan�r ve iki nesne atama s�ras�nda aktive olur
		//	this->x=2*(p.x);  y=2*p.y;
	//	}
};
	

void Point::print(){
	cout<<"("<<x<<","<<y<<")"<<"\n" ;
}
 Point ObjectYarat(){
	int x1,y1;
	cout<<"iki int deger gir:";
	cin>>x1>>y1;
	return Point(x1,y1);
}
int main(){
	Point p1;
	p1.print();
	Point p2(155,125);
	p2.print();
//	p1.x=500; illegal atama, x private �ye..
    p1.setX(500);
    p1.print();
    cout<<"***************"<<endl;
    Point px=ObjectYarat();
    px.print();
    
    p1=p2;   //Nesne atanmas� �yelerin birer birer atamas� �eklinde olur.
    p1.print();
    
    Point *pp;
    pp=&p2;
    cout<<"Simdi Adres nesnesi uzerinden islem olacak"<<endl;
    pp->print();
}
