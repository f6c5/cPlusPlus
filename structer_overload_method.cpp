#include <iostream>
#include <string>
#include <type_traits>
using namespace std;

class student{

private:
    int id;
    int age;
    string name;
public:
    student(){
        id = 0;
        name = "gecersiz";
        age = 0;
    }
    student(string ad, int no, int yas){
        id = no;
        name = ad;
        age = yas;
    }
    student(string ad, int no){
        id = no;
        name = ad;
        age = 20;
    }
    void show(){
        cout << "no: " << id << endl;
        cout << "isim: " << name << endl;
        cout << "yas: " << age << endl;
    }
    static void show(student std){
        cout << "no: " << std.id << endl;
        cout << "isim: " << std.name << endl;
        cout << "yas: " << std.age << endl;
    }
    void setStudent(string name, int id, int age){
        this->id = id;
        this->name = name;
        this->age = age;
    }
};

int main(){
    //basit nesne olusturma ve set metoduyla atama islemi yaptiktan sonra normal yazdirdik
    student std1;
    std1.setStudent("isim1", 1, 20);
    std1.show();

    cout<<endl;

    //yazdirma islemini farkli bir sekilde yazmak istiyorum. sifimizin icindeki statik metodumuzu cagiriyoruz  ve yazdirmak istedigimiz nesneyi yaziyoruz
    student::show(std1);

    cout<<endl;

    //pointer yardimiyla bellekte student sinifimiz kadar yer ayirttik ve bunu set metoduyla duzenledik
    student* std2 = new student();
    //bir pointer oldugu icin "." yerine "->" isaretini kullandik
    std2->setStudent("isim2", 2, 20);
    std2->show();

    cout<<endl;

    //set metodu olmadan constructor overloading kullanarak nesnemizi olusturdugumuz zaman deger atamalarini yapabiliriz
    student* std3 = new student("isim3", 3, 20);
    //yazdirma islemini yine bu sekilde yapabilriz bu sefer nesnemizin basina "*" isareti koymaliyiz 
    student::show(*std3);

    cout<<endl;
    
    //metodlarda oldugu gibi constructorlarda da overloading yapabiliriz
    student std4("isim4", 4);
    std4.show();

    cout<<endl;
    /*eger constructor overloading kullanmiyacaksak bir tane parametre almayan constructor olusturmaliyiz.
    eger atama islemini biz yapmazsak cpp default degerler atar onun yerine atamalari constructorin icine yazarsak
    nesne olusturuldugu zaman cpp nin atayacagi default degerler yerine bizim belirledigimiz degerleri atar*/
    student std5;
    std5.show();
    return 0;
}