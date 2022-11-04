#include <iostream>
using namespace std;

struct Ogrenci {
    int No;
    string Ad;
    string Soyad;
    int Yas;
    Ogrenci* Sonraki;
};

Ogrenci* Head = NULL;
int main()
{
    
    int menuSecim = 0;
    while(menuSecim!=-1)
    {
        cout << "1- Ogrenci Eklemek icin" << endl;
        cout << "2- Ogrenci Bulmak icin" << endl;
        cout << "3- Ogrenci Silmek icin" << endl;
        cout << "4- Ogrencileri Listelemek icin" << endl;
        cout << "5- Programdan cikmak icin" << endl;
        cin >> menuSecim;

        switch (menuSecim)
        {
            case 1:
            {
                Ogrenci* tmpOgrenci = new Ogrenci();
                cout << "No giriniz";
                cin >> tmpOgrenci->No;
                cout << endl;
                cout << "Ad giriniz";
                cin >> tmpOgrenci->Ad;
                cout << endl;
                cout << "Soyad giriniz";
                cin >> tmpOgrenci->Soyad;
                cout << endl;
                cout << "Yas giriniz";
                cin >> tmpOgrenci->Yas;
                cout << endl;
                
                if (Head == NULL)
                    Head = tmpOgrenci;
                else
                {
                    tmpOgrenci->Sonraki = Head;
                    Head = tmpOgrenci;
                }

            }
            break;
            case 2:
            {
                bool Bulundumu = false;
                if (Head == NULL)
                    cout << "Listede ogrenci bulunmuyor" << endl;
                else
                {
                    Ogrenci* IlkNode = Head;
                    int No;
                    cout << "Bulmak istediginiz Ogrencinin Numarasini giriniz";
                    cin >> No;
                    while (IlkNode != NULL)
                    {
                        if (IlkNode->No == No)
                        {
                            cout << "Ogrenci bulundu. Ad / Soyad " << IlkNode->Ad << "/" << IlkNode->Soyad << endl;
                            Bulundumu = true;
                            break;
                        }
                        IlkNode = IlkNode->Sonraki;
                    }
                }
                if (Bulundumu == false)
                    cout << "Ogrenci bulunamadi" << endl;
            }
            break;
            case 3:
            {
                bool Bulundumu = false;
                if(Head==NULL)
                    cout << "Listede ogrenci bulunmuyor" << endl;
                else
                {
                    Ogrenci* SilNode = Head;
                    Ogrenci* OncekiNode = NULL;
                    int No;
                    cout << "Silmek istediginiz Ogrenci Numarasini giriniz.";
                    cin >> No;
                    cout << endl;
                    while (SilNode != NULL)
                    {
                        if (SilNode->No == No)
                        {
                            Bulundumu = true;
                            if (SilNode == Head)
                            {
                                Head = SilNode->Sonraki;
                                delete SilNode;
                                SilNode = Head;
                            }
                            else
                            {
                                OncekiNode->Sonraki = SilNode->Sonraki;
                                delete SilNode;
                                SilNode = OncekiNode->Sonraki;
                                break;
                            }

                        }
                        else
                        {
                            OncekiNode = SilNode;
                            SilNode = SilNode->Sonraki;
                        }
                        
                    }
                }
                if (Bulundumu == false)
                    cout << "Silinecek Ogrenci bulunamadi" << endl;

            }
            break;
            case 4:
            {
                if (Head == NULL)
                    cout << "Liste bos" << endl;
                else
                {
                    Ogrenci* Node = Head;
                    cout << "No\t" << "Ad\t" << "Soyad\t" << "Yas" << endl;
                    while (Node != NULL)
                    {
                        cout << Node->No<<"\t" << Node->Ad<<"\t" << Node->Soyad<<"\t" << Node->Yas << endl;
                        Node = Node->Sonraki;
                    }
                }
            }
            break;
            case 5:
            {
                cout << "Programdan cikiliyor" << endl;
                menuSecim = -1;
            }
            break;
        
        }


    
    }




}

