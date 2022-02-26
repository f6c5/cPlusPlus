// LinearLinkList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Node
{
    int Data;
    Node* Link;
};
int main()
{
    Node* HEAD = NULL;
    int menu = 0;
    bool Cont = true;

    while (Cont)
    {
        cout << "1- Veri ekle" << endl;
        cout << "2- Listele" << endl;
        cout << "3- Bitir" << endl;
        cout << "seçiminiz ?";
        cin >> menu;
        switch (menu)
        {
        case 1:
        {

            Node* tmp = new Node();
            cout<<"Eklenecek veriyi giriniz"<<endl;
            cin >> tmp->Data;
            if (HEAD == NULL)
                HEAD = tmp;
            else
            {
                tmp->Link = HEAD;
                HEAD = tmp;
            }


        }
        break;
        case 2:
        {
            Node* tmp = HEAD;
            cout << "Listedeki veriler" << endl;
            while (tmp != NULL)
            {
                cout << tmp->Data << "\t";
                tmp = tmp->Link;
            }
            cout << endl;
        }
        break;
        case 3:
            Cont = false;

        }
    }

}

