#include <iostream>
using namespace std;
//Bu örnek miras özelliginin testi amaçlý yazýlmýþtýr
class Point{
	protected:
		int x,y;
	public:
		Point(){
			x=0; y=0; //fabrika ayarlarý
		}
		Point(int x1,int y1){
			x=x1; y=y1;
		}
		void print(){
			cout<<"("<<x<<","<<y<<")"<<"\n" ;
		}
		 void setPoint(int x1,int y1){x=x1; y=y1;
		}
		Point getPoint(){
			int x1,y1;
			cout<<"Enter iki tam sayi:";
			cin>>x1>>y1;
			return Point(x1,y1);
		}
		double alan(){
			return 0;
		}		
};
class Circle:public Point{
	protected:
		int r;  //sadece ilave eleman yazýlýyor
	public:
		Circle(int x2,int y2, int r):
			Point(x2,y2){
				this->r=r;
			}
		void print(){
			cout<<"("<<x<<","<<y<<"),"<<r<<"\n" ;
		}
		double alan(){
			return 3.14*r*r;
		}
};
class Silindir:public Circle{
	private:
		int h;
	public:
		Silindir(int x1,int y1,int r1,int h1):Circle(x1,y1,r1){
			h=h1;
		}
		void print(){
			cout<<"("<<x<<","<<y<<"),"<<r<<","<<h<<endl ;
		}
		double alan(){
			return ((2*3.14*r*r)+(2*3.14*r*h));
		}
};
int main(){
	Point p1(250,145);
	Circle c1(200,300,10);
	p1.print();
	c1.print();
	cout<<"Nokta Alan:"<<p1.alan()<<" Daire Alan:"<<c1.alan()<<endl;
	Silindir s1(110,65,10,5);
	s1.print();
	cout<<"Silindir Alan:"<<s1.alan()<<endl; 
}
