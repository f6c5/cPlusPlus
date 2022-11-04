#include <iostream>
using namespace std;


const int MAXSIZE=5;

struct Queue{
	//DATA
	int Data[MAXSIZE];
	int Rear=-1;
	int Front=-1;
	//FONKS�YONLAR
	void EnQueue(int val){
		if(Front==-1)
			Front=0;
		if(Rear<MAXSIZE-1)
		{
			Rear=Rear+1;
			Data[Rear]=val;
		}
		else
		{
			cout<<"Kuyruk/Queue dolu"<<endl;
		}
	}

	void DeQueue(){
		if(Front==-1)
			cout<<"Kuyruk/Queue bos"<<endl;

		if(Front<Rear)
		{
			cout<<"Kuyruktan "<<Data[Front]<<" degeri cikiyor";
			Front=Front+1;
		}else
		{
			cout<<"Kuyruk bos"<<endl;
			Front=-1;
			Rear=-1;
		}
	}

	void PrintQueue(){
		for(int i=Front;i<=Rear;i++)
			cout<<i<<".deger"<<Data[i]<<endl;
	}
};


int main(int argc, char** argv)
{
	Queue Test;
	int menu=0;
	while(menu!=4)
	{
		cout<<"1- Kuyru�a ekleyin"<<endl;
		cout<<"2- Kuyruktan cikartin"<<endl;
		cout<<"3- Kuyru�u yazdir"<<endl;
		cout<<"4- Cikis"<<endl;
		cout<<"Seciminizi yapiniz";
		cin>>menu;
		int sayi=0;
		switch(menu)
		{
			case 1:
				cout<<"Eklenecek degeri girin";
				cin>> sayi;
				Test.EnQueue(sayi);
				break;
			case 2:
				Test.DeQueue();
				break;
			case 3:
				Test.PrintQueue();
				break;
			case 4:
				cout <<"Programdan cikiliyor";
				return 0;
		}
	}


	Test.EnQueue(10);
	Test.EnQueue(20);
	Test.PrintQueue();
}
