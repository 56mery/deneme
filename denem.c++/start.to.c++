#include <iostream>
using namespace std;

int main() {
    int x,y;
    int toplam=0;
    float ort;
   cout<<"birinci sayiyi giriniz:";
   cin>>x;
   cout<<"ikinci sayiyi giriniz:";
   cin>>y;
   toplam=x+y;
   ort=toplam/2;
   cout<<"iki sayinin toplami:"<<toplam<<endl<<"sayilari ortalamasi:"<<ort;
 
    return 0;
}





//en hesap makinesi hesap makinesi
#include <iostream>
using namespace std;

int main() {
    char islem;
    int sonuc,x,y,d,z,isinizbittimi=1;
    cout<<"bibinin hesap makinesi"<<endl;
  
    while(isinizbittimi){
        cout<<"sayi giriniz:";
        cin>>x;
        cout<<"diger sayiyi giriniz:";
        cin>>y;
        cout<<"islemi giriniz:";
         cin>>islem;
         
       
            if(islem=='+'){
            sonuc=(x+y);
            cout<<"sonuc:"<<sonuc<<endl;
            }
            if(islem=='-'){
             sonuc=(x-y);
             cout<<"sonuc:"<<sonuc<<endl;
            }
            if(islem=='*'){
            sonuc=(x*y);
             cout<<"sonuc:"<<sonuc<<endl;
            }
            if(islem=='/'){
           sonuc=(x/y);
             cout<<"sonuc:"<<sonuc<<endl;
            }
        
        
       
        do{
             cout<<"kaldigin yerden devam etmek ister misin , yoksa farklı bir yol mu izleyeceksin? evet ise 1 hayir ise 0 a bas:";
             cin>>d;
            cout<<"diğer sayiyi giriniz:";
            cin>>z;
             cout<<"islemi giriniz:";
             cin>>islem;
             
             if(islem=='+'){
            sonuc=(sonuc+z);
            cout<<"sonuc:"<<sonuc<<endl;
            }
            if(islem=='-'){
             sonuc=(sonuc-z);
             cout<<"sonuc:"<<sonuc<<endl;
            }
            if(islem=='*'){
            sonuc=(sonuc*z);
             cout<<"sonuc:"<<sonuc<<endl;
            }
            if(islem=='/'){
           sonuc=(sonuc/z);
             cout<<"sonuc:"<<sonuc<<endl;
            }
        
        }while(d);
     
            cout<<"tekrar kullanmak ister misin? ever ise bir hayir ise sifira bas.";
            cin>>isinizbittimi;
    }
    
    return 0;
}
 

//functions

int& max (int& a, int& b, int& c);

int main() {
   int x1,x2,x3;
   int result=0;
   x1=5;
   x2=1;
   x3=2;
   result= max(x1,x2,x3);
   std::cout<<"sonuc: "<<result<<endl;

    return 0;
}

int& max(int& x1, int& x2, int& x3){
    return (x1>x2)? ((x1>x3)?x1:x3) : ((x2>x3)?x2:x3);
}


//
#include <iostream>
using namespace std;

int kareal(int a, int b);

int main() {
   int x1,x2;
   int result=0;
   x1=5;
   x2=2;
   kareal(x1,x2);

    return 0;
}

int kareal(int x1, int x2){
   cout<<"ilk sayinin karesi: "<<(x1*x1)<<endl<<"ikinci sayinin karesi: "<<(x2*x2);
}



//
#include <iostream>
using namespace std;

int toplam(int x){
    if(x<100){
        if(x%2==0){
            return x + toplam(x+1);
        }
        else toplam(x+1);
    }
}

int main() {
    int i=1;
    int sonuc=0;
    sonuc= toplam(i);
    cout<<"1-100 arasi cift sayilarin toplami: "<<sonuc<<endl;

    return 0;
}