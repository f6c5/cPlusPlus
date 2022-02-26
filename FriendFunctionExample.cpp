#include <iostream>
using namespace std;

class MyFriend{
	private:
		int x,y;
	public:
       friend int multiply(MyFriend mx);
		MyFriend(){
			x=0,y=0;
		}
		MyFriend(int x1,int y1){
			x=x1;
			y=y1;
		}
		void print(){
			cout<<"x="<<x<<" y="<<y<<endl;
		}
}; 
int multiply(MyFriend m){
	return m.x*m.y;
}
int main(){
	MyFriend mf(5,8);
	mf.print();
	cout<<"Sonuc:"<<multiply(mf)<<endl;
}

