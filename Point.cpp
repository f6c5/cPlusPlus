#include <iostream>
using namespace std;

class Point{
	private:
		int x,y;
	public:
		Point(){
			x=0; y=0; //fabrika ayarlarý
		}
		Point(int x1,int y1){
			x=x1; y=y1;
		}
		void print();  //sadece deklerasyon içerik sýnýfýn dýþýnda yazýlacak
		 void setX(int x1){x=x1;
		}
		int getX(){return x;
		}
		//Point(Point &p){  //Copy constructor genellikle derleyici tarafýndan saðlanýr ve iki nesne atama sýrasýnda aktive olur
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
//	p1.x=500; illegal atama, x private üye..
    p1.setX(500);
    p1.print();
    cout<<"***************"<<endl;
    Point px=ObjectYarat();
    px.print();
    
    p1=p2;   //Nesne atanmasý üyelerin birer birer atamasý þeklinde olur.
    p1.print();
    
    Point *pp;
    pp=&p2;
    cout<<"Simdi Adres nesnesi uzerinden islem olacak"<<endl;
    pp->print();
}
