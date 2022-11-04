#include <iostream>
using namespace std;

class Shape{

	public:
		const static double pi=3.14;
		virtual void print()=0;
		virtual double alan()=0;  //pure virtual polymorphism i�in gerekli
};
class Point:public Shape{
	protected:
		int x,y;
	public:
		Point(int x1,int y1){
			x=x1; y=y1;
		}
		void print(){
				cout<<"("<<x<<","<<y<<")"<<"\n" ;
		}
		double alan(){
			return 0;
		}
};
class Circle:public Point{
	protected:
		int r;
	public:
		Circle(int x1,int y1,int r1):Point(x1,y1){
			r=r1;
		}
		void print(){
				cout<<"("<<x<<","<<y<<"),"<<r<<"\n" ;
		}
		double alan(){
			return pi*r*r;
		}
};
class Silindir:public Circle{
	private:
		int h;
	public:
		Silindir(int x2, int y2, int r2, int h):Circle(x2,y2,r2){
			this->h=h;
		}
		void print(){
				cout<<"("<<x<<","<<y<<"),"<<r<<","<<h<<endl ;
		}
		double alan(){
			return ((2*pi*r*r)+(2*pi*r*h));
		}
		double hacim(){
			return pi*r*r*h;
		}
};
int main(){
	//C++ da dizi olarak Shape s�n�f�n�n pointer nesneleri kullan�lacak
	
	Shape *sh[3];
	//Ad�m 2: alt s�n�f nesneleri yarat�lacak
	Point p(500,300);
	Circle c(300,100,10);
	Silindir s(150,350,5,15);
	//Ad�m 3 alt s�n�f nesneleri �st s�n�f pointer dizi elemanlar�na atanacakt�r
	sh[0]=&p;
	sh[1]=&c;
	sh[2]=&s;
	//Ad�m 4 polymorphism gerceklenecek
	for(int i=0; i<3;i++)
		cout<<"Alan:"<<sh[i]->alan()<<endl;
	
}
