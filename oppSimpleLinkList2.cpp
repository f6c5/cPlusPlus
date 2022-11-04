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
        cout << "3- Bul" << endl;
        cout << "4- Sil" << endl;
        cout << "5- Bitir" << endl;
        cout << "seciminiz ?";
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
        {
            int Ara;
            cout << "Bulunaca No'yu giriniz";
            cin >> Ara;
            Node* tmp = HEAD;
            while (tmp != NULL)
            {
                if (tmp->Data == Ara)
                {
                    cout << "Bulundu Listede var";
                }

                tmp = tmp->Link;
            }
            
        }
        break;
        case 4:
        {
            int Sil;
            cout << "Silinecek No'yu giriniz";
            cin >> Sil;
            
            if(HEAD->Data == Sil)
            {
                Node* SilinecekNode = HEAD;
                HEAD = HEAD->Link;
                delete SilinecekNode;
            }
            else
            {
                Node* CurrentNode = HEAD->Link;
                Node* PrevNode = HEAD;
                while (CurrentNode != NULL)
                {
                    if (CurrentNode->Data == Sil)
                    {
                        Node* SilNode = CurrentNode;
                        PrevNode->Link = CurrentNode->Link;
                        delete SilNode;
                        cout << "Node silindi" << endl;
                        break;
                    }

                }
            }

        }
        break;
        case 5:
            Cont = false;

        }
    }

}

