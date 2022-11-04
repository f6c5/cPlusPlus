#include <iostream>
using namespace std;

struct ComplexNumber {
    int Real = 0;
    int Img = 0;

    ComplexNumber Sum(ComplexNumber Sayi)
    {
        ComplexNumber Tmp;
        Tmp.Real = Real + Sayi.Real;
        Tmp.Img = Img + Sayi.Img;
        return Tmp;
    }
    ComplexNumber Subtract(ComplexNumber Sayi)
    {
        ComplexNumber Tmp;
        Tmp.Real = Real - Sayi.Real;
        Tmp.Img = Img - Sayi.Img;
        return Tmp;
    }

    bool Equals(ComplexNumber Sayi)
    {
        if (Real != Sayi.Real)
            return false;

        if (Img != Sayi.Img)
            return false;

        return true;
    }
    void Print()
    {
        cout << "Karmasik Sayi=" << Real << "+" << Img << "i" << endl;
    }
};



int main()
{
    ComplexNumber MyNumber;
    cout << "Kompleks Sayi hesaplama" << endl;
    cout << "Reel K�sm� Giriniz" << endl;
    cin >> MyNumber.Real;
    cout << "Imajinal/Sanal K�sm� Giriniz" << endl;
    cin >> MyNumber.Img;
    MyNumber.Print();

    ComplexNumber SecondNumber;
    SecondNumber.Real = 2;
    SecondNumber.Img = 3;

    ComplexNumber tmpSum=MyNumber.Sum(SecondNumber);
    cout << "Toplama Sonras� de�erler" << endl;
    tmpSum.Print();

    ComplexNumber tmpSub = MyNumber.Subtract(SecondNumber);
    cout << "Cikartma Sonras� de�erler" << endl;
    tmpSub.Print();

    cout << "Iki Say� Ayn� m�?" << endl;
    if (MyNumber.Equals(SecondNumber) == true)
        cout << "Iki Sayi ayni";
    else
        cout << "Iki Sayi farkli";

    MyNumber.Print();

}

