#include <iostream>
using namespace std;
#define Pi 3

class Circle
{
    int yaricap;

public:
    void ata(int r)
    {
        yaricap = r;
    }

    int alan()
    {
        return yaricap * yaricap * Pi;
    }

    int cevre()
    {
        return 2 * Pi * yaricap;
    }
};

int main()
{
    Circle x;
    x.ata(3);
    cout << "cemberin alani: " << x.alan() << endl;
    cout << "cemberin cevresi: " << x.cevre() << endl;

    return 0;
}

/////////////

#include <iostream>
using namespace std;

class Rectangle
{
    int uzunluk, genislik;

public:
    void ata(int e, int b)
    {
        uzunluk = b;
        genislik = e;
    }

    int alan()
    {
        return uzunluk * genislik;
    }

    int cevre()
    {
        return (2 * uzunluk) + (2 * genislik);
    }
};

int main()
{
    Rectangle x;
    x.ata(2, 4);
    cout << "dikdorgenin alani: " << x.alan() << endl;
    cout << "dikdortgenin cevresi: " << x.cevre() << endl;

    return 0;
}

//////

#include <iostream>
using namespace std;

class Onemuch
{
    int a;

public:
    void atama(int sayi)
    {
        a = sayi;
    }

    int arti()
    {
        return a + 1;
    }
};

int main()
{
    Onemuch x;
    int sayi;
    cout << "bir sayi giriniz: ";
    cin >> sayi;
    x.atama(sayi);
    cout << "girdiginiz sayinin bir fazlasi: " << x.arti();

    return 0;
}

/////////////
class Car
{
private:
    int mileage = 0;
    string brand, model;

public:
    void drive(int distance)
    {
        mileage += distance;
        cout << "mileage: " << mileage << endl;
    }

    void degeratama(string brd, string mdl)
    {
        brand = brd;
        model = mdl;
    }

    void br()
    {
        cout << "brand: " << brand << endl;
        cout << "model: " << model;
    }
};

int main()
{
    Car car1;
    car1.degeratama("porche", "ctr");
    car1.drive(50);
    car1.br();

    return 0;
}

class Ddg
{
private:
    int en, boy;
    int al, cev;

public:
    void degeratama(int ne, int yob)
    {
        en = ne;
        boy = yob;
    }

    void alan()
    {
        al = en * boy;
    }

    void cevre()
    {
        cev = (2 * en) + (2 * boy);
    }

    void br()
    {
        alan();
        cevre();
        cout << "alan: " << al << endl;
        cout << "cevre: " << cev;
    }
};

int main()
{
    Ddg d1;
    d1.degeratama(2, 4);

    d1.br();

    return 0;
}

////////////
#include <iostream>
using namespace std;

class Veri
{
public:
    int puan[5];
    string ad[5];

public:
    void get()
    {
        int a = 0;
        while (a < 5)
        {
            cout << "puaniniz: ";
            cin >> puan[a];
            cout << "adiniz: ";
            cin >> ad[a];
            a++;
        }
    }

    void put()
    {
        int i = 0;
        while (i < 5)
        {
            cout << "name: " << ad[i] << endl;
            cout << "not: " << puan[i] << endl;
            i++;
        }
    }
};


class Max
{
public:
    int nt[5];

    void degeratama(Veri veri)
    {
        for (int b = 0; b < 5; b++)
        {
            nt[b] = veri.puan[b];
        }
    }

    void max()
    {
        int max = nt[0];
        for (int i = 1; i < 5; i++)
        {
            if (nt[i] > max)
                max = nt[i];
        }
        cout << "en yuksek not: " << max;
    }
};

int main()
{
    Max ogr;
    Veri veri;

    veri.get();
    veri.put();
    ogr.degeratama(veri);
    ogr.max();

    return 0;
}



////////////
class Hm{
    private:
    char islem;
    int x,y;
    
    public: 
    void degeratama(int a, int b, char ch){
        x=a;
        y=b;
        islem=ch;
    }
    
    int islm(){
        int sonuc=0;
        switch(islem){
            case '+': sonuc= x+y; break;
            case '-':  sonuc= x-y; break;
            case '*':  sonuc= x*y; break;
            case '/':  sonuc= x/y; break;
        }
        return sonuc;
    }
    
};


int main() {
    Hm soru;
    
    soru.degeratama(20,10,'/');
    cout<<"sonuc: "<<soru.islm();
    
    return 0;
}




///////////////////////
class Ders{
   public:
    string ogr[3];
   int vize[3];
   int final[3];
  
   
   void getvalue(){
       for(int i=0; i<3; i++){
           cout<<"adiniz: ";
           cin>>ogr[i];
           cout<<"vize notunuz: ";
           cin>>vize[i];
           cout<<"final notunuz: ";
           cin>>final[i];
       }
   }
   
   void ort(){
       int ortlam[3];
       for(int a=0; a<3; a++){
           ortlam[a]=((vize[a]*40)/100)+((final[a]*60)/100);
           if(ortlam[a]>=55)
               cout<<ogr[a]<<" geçti"<<endl;
           
           else
           cout<<ogr[a]<<" kaldi"<<endl;
       }
   }
};


int main() {
    Ders ogrenci;
    
    ogrenci.getvalue();
    ogrenci.ort();
    
    
    return 0;
}


////
class A{
   public:
    int pub=3;
    
    void setPvt(){
        cout<<"pvt var: "<<pvt<<endl;
    }
   
   protected:
   int prot=2;
   
    private:
   int pvt=1;
   
   
};

class Publ: public A{
    public:
     void Pub(){
         cout<<"public variable: "<<pub<<endl;
     }
     
    void setProt(int a){
         prot=a;
         cout<<"prot verable: "<<prot<<endl;
     }
     
};
   

int main() {
   Publ pb1;
   
   pb1.Pub();
   pb1.setProt(2);
   pb1.A::setPvt();
    
    return 0;
}



/// ///
class A{
   public:
    int pub;
   
   protected:
   int prot;
   
    private:
   int pvt;
    
};

class Prot: protected A{
    
    /*
    public:
    void Pub(){
        cout<<"public var: "<<pub;
    }*/ //burda hata vermiyor ama direkt hiçbir şey yazmiyor //(güncelleme)çünku degeri yok mal 
    
    void setPub(int a){
        pub=a;
        cout<<"public var: "<<pub<<endl;
    }
    void SetProt(int b){
        prot=b;
        cout<<"protected var: "<<prot;
    }
};
   

int main() {
   Prot prt1;
   prt1.setPub(3);
   prt1.SetProt(2);
   
    
    return 0;
}


/// ///////
class A{
    protected:
        string ad;
        string soyad;
       
    public:
    int yas;
    
    void yd(int y){
        yas=y;
        cout<<"yasiniz: "<<yas<<endl;    }
    
     A(): sinif(0) {}
    
    private:
     int sinif;
     
     friend int C (A);
 
};

int C (A t){
    t.sinif=13;
    return t.sinif;
}

class B: protected A{
    public:
    void getAd(string x){
        ad=x;
        cout<<"adiniz: "<<ad<<endl;
    }
    
    void getSad(string y){
        soyad=y;
        cout<<"soyadiniz: "<<soyad<<endl;
    }
};


int main() {
    B b1;
    b1.getAd("mery");
    b1.getSad("jeon");
    
    A a1;
    a1.yd(18);
    
    cout<<"sinifiniz: "<<C(a1);
  
    return 0;
}



//////////////////////
class Animal{
    public:
    void hi(){
        cout<<"i have 4 paws"<<endl;
    }
};

class Human{
    public: 
    void hmn(){
        cout<<"i have feelings"<<endl;
    }
    
    void iam(){
        cout<<"i am normal human"<<endl;
    }
};

class Dog: public Animal, public Human{
    public:
    void bark(){
        cout<<"haw haw"<<endl;
    }
}; 

class Cat: public Animal, public Human{
    public: 
    void meow(){
        cout<<"meow meow nig-"<<endl;
    }
    
    void iam(){
        cout<<"i am an alien"<<endl;
    }
};

int main() {
    Dog dog;
    
    cout<<"Doggo: "<<endl;
    dog.hi();
    dog.bark();
    dog.hmn();
    
    Cat cat;
    cout<<"Catto"<<endl;
    cat.hi();
    cat.meow();
    cat.iam();
   
   cout<<"Human"<<endl;
    cat.Human::iam();
  
    return 0;
}


/////////
class Base{
    private:
    int age;
    
    public:
    int puan;
    
    protected:
    int not1;
    
};

class Chld: private Base{
     public:
     void getPuan(int a){
         puan=a;
         cout<<"puan: "<<puan<<endl;
     }
     void Getnot(int n){
         not1=n;
         cout<<"not: "<<not1;
     }
};

int main() {
    Chld ch;
    ch.getPuan(50);
    ch.Getnot(2);
  
    return 0;
}


//////////////////
class Base{
    private:
    int age;
    friend void getAge(Base);
    
    public:
    int puan;
    
    Base(): age(0) {}
    
    protected:
    int not1;
    
};

class Chld: private Base{
     public:
     void getPuan(int a){
         puan=a;
         cout<<"puan: "<<puan<<endl;
     }
     void Getnot(int n){
         not1=n;
         cout<<"not: "<<not1<<endl;
     }
};

void getAge(Base x){
    x.age=18;
    cout<<"age: "<<x.age;
}

int main() {
    Chld ch;
    ch.getPuan(50);
    ch.Getnot(2);
    
    Base b;
    getAge(b);
  
    return 0;
}


////////
class Base{
    public:
    int not1,not2;
    
};

Base crt(){
    Base std;
    std.not1=23;
    std.not2=02;
    
    cout<<"not 1: "<<std.not1<<endl;
    cout<<"not 1:"<<std.not2;
    
    return std;
}

int main() {
    Base std1;
    std1=crt();
  
    return 0;
}



//////////////
class Pet{
    protected:
    int sayi;
}; 

class Ata: protected Pet{
    public:
     void get(int a){
         sayi=a;
     }
     void show(){
         cout<<"pet count: "<<sayi;
     }
};

int main() {
    Ata *ptr= new Ata;
    
    ptr->get(2);
    ptr->show();
    
    delete ptr;
    
    return 0;
}

////////////
class Pet{
    protected:
    int sayi;
    public:
    void tür(){
        cout<<"kedysi var"<<endl;
    }
}; 

class Ata: protected Pet{
    public:
     void get(int a){
         sayi=a;
     }
     void show(){
         cout<<"pet count: "<<sayi<<endl;
     }
     
     void tür(){
         cout<<"kusu var"<<endl;
         Pet::tür();
     }
};

int main() {
    Ata *ptr= new Ata;
    
    ptr->get(2);
    ptr->show();
    ptr->tür();
    
    delete ptr;
    
    return 0;
}