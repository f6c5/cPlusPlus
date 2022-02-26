// Struct Kullanarak Stack ADT / Yýðýn Sanal Veri Tipi 
// Dr. Aykut Güven
// Beykent Üniversitesi Bilgisayar Mühendisliði Bölümü
// Veri Yapýlarý ve Algoritmalar Dersi
// 
// 
//

#include <iostream>
using namespace std;
struct Stack {
    const int SIZE = 8;
    int STACK[8];
    int Pozisyon = 0;

    void Ekle()
    {
        if (Pozisyon > SIZE - 1)
        {
            cout << "Stack/Yigin dolu yeni bir eleman eklenemiyor." << endl;
            return;
        }
        int Deger;
        cin >> Deger;
        STACK[Pozisyon] = Deger;
        ++Pozisyon;
    }
    void Sil()
    {
        if (Pozisyon == 0)
        {
            cout << "Stack/Yigin boþ silinecek eleman yok." << endl;
            return;
        }
        --Pozisyon;
    }
    void Listele()
    {
        if (Pozisyon == 0)
        {
            cout << "Stack/Yigin boþ listelenecek eleman yok." << endl;
            return;
        }
        for (int i = 0;i < Pozisyon;i++)
        {
            cout << i << ". eleman " << STACK[i] << endl;
        }
    }
};
int main()
{
    Stack Veri;
    int menu = 0;
    while (true)
    {
        cout << "Stack islemleri" << endl;
        cout << "Yeni bir kayit eklemek icin 1'e basiniz." << endl;
        cout << "Kayit silmek icin 2'ye basiniz." << endl;
        cout << "Elemanlari listelemek icin 3'e basiniz." << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            Veri.Ekle();
            break;
        case 2:
            Veri.Sil();
            break;

        case 3:
            Veri.Listele();
            break;
        default:
            cout << "Tanimli bir islem secmediniz" << endl;
            break;
        }
    }
}

