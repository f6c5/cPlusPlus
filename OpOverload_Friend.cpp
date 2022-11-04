#include <iostream>
using namespace std;
//friend fonksiyon kullanan operator overloading �rne�i
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
	 friend ostream& operator<<(ostream& os, const Kare& k){
      os <<"k.a="<< k.a<<endl;
      return os;
}
};
/*ostream& operator<<(ostream& os, const Kare& k)
{
    os << k.a<<endl;
    return os;
}*/
int main(){
	Kare k1(9);
	cout<<k1<<endl;
}
