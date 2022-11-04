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
    Node* LAST = NULL;
    int menu = 0;
    bool Cont = true;

    while (Cont)
    {
        cout << "1- Veri ekle" << endl;
        cout << "2- Listele" << endl;
        cout << "3- Bul" << endl;
        cout << "4- Sil" << endl;
        cout << "5- Bitir" << endl;
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
            {
                
                HEAD = tmp;
                LAST = tmp;
                LAST->Link = HEAD;
                
            }
            else
            {
                
                tmp->Link = HEAD;
                LAST->Link = tmp;
                HEAD = tmp;
            }


        }
        break;
        case 2:
        {
            if (HEAD == NULL)
            {
                cout << "Listede eleman bulunmuyor" << endl;
            }
            else
            {
                Node* tmp = HEAD;
                cout << "Listedeki veriler" << endl;

                while (tmp->Link != HEAD)
                {
                    cout << tmp->Data << "\t";
                    tmp = tmp->Link;
                }
                cout << tmp->Data;
                cout << endl;

            }
                
            
           
        }
        break;
        case 3:
        {
            int Ara;
            bool Bulundumu = false;
            cout << "Bulunacak No'yu giriniz";
            cin >> Ara;
            Node* tmp = HEAD;
            do           
            {
                if (tmp->Data == Ara)
                {
                    cout << "Bulundu Listede var";
                    Bulundumu = true;
                }

                tmp = tmp->Link;
            } while (tmp != HEAD);



            if (Bulundumu==false)
                cout << "Ananan deger bulunamadi" << endl;
            
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
                LAST->Link = HEAD;
                delete SilinecekNode;
            }
            else
            {
                Node* CurrentNode = HEAD->Link;
                Node* PrevNode = HEAD;
                do
                {
                    if (CurrentNode->Data == Sil)
                    {
                        Node* SilNode = CurrentNode;
                        PrevNode->Link = CurrentNode->Link;
                        delete SilNode;
                        cout << "Node silindi" << endl;
                        break;
                    }
                    else
                    {
                        PrevNode = CurrentNode;
                        CurrentNode = CurrentNode->Link;
                    }

                } while (CurrentNode != HEAD);
            }

        }
        break;
        case 5:
            Cont = false;

        }
    }

}

