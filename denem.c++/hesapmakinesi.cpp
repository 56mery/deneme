#include <iostream>
using namespace std;

int main()
{
    char islem;
    long double sonuc = 0, x, y, d = 1, z, isinizbittimi = 1;
    cout << "\t\t\t\t\t~~Hesap Makinesi~~" << endl;

    while (isinizbittimi)
    {
        cout << "İlk sayiyi giriniz: ";
        cin >> x;
        cout << "Diger sayiyi giriniz: ";
        cin >> y;
        cout << "Yapmak istediginiz islemi giriniz: ";
        cin >> islem;

        if (islem == '+')
        {
            sonuc = (x + y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '-')
        {
            sonuc = (x - y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '*')
        {
            sonuc = (x * y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '/')
        {
            sonuc = (x / y);
            cout << "sonuc: " << sonuc << endl;
        }

        d = 1;
        while (d)
        {
            cout << sonuc << " sonucundan devam etmek ister misiniz, yoksa farklı bir yol mu izleyeceksin? evet ise 1 hayir ise 0'a basiniz: ";
            cin >> d;

            if (d == 0)
                break;

            cout << "Diğer sayiyi giriniz: ";
            cin >> z;
            cout << "Yapmak istediginiz islemi giriniz: ";
            cin >> islem;

            if (islem == '+')
            {
                sonuc = (sonuc + z);
                cout << "sonuc: " << sonuc << endl;
            }
            if (islem == '-')
            {
                sonuc = (sonuc - z);
                cout << "sonuc: " << sonuc << endl;
            }
            if (islem == '*')
            {
                sonuc = (sonuc * z);
                cout << "sonuc: " << sonuc << endl;
            }
            if (islem == '/')
            {
                sonuc = (sonuc / z);
                cout << "sonuc: " << sonuc << endl;
            }
        }

        cout << "Hesap makinesini tekrar kullanmak ister misiniz? ever ise bir hayir ise sifira basiniz: ";
        cin >> isinizbittimi;
        if (isinizbittimi == 0)
            break;
    }

    return 0;
}

int main()
{
    char islem;
    long double sonuc = 0, x, y, d = 1, z, isinizbittimi = 1;
    cout << "\t\t\t\t\t~~Hesap Makinesi~~" << endl;

    cout << "yaptirmak istediginiz islemleri giriniz: ";
    cin >> x;
    cin >> islem;
    cin >> y;
    if (islem == '+')
    {
        sonuc = (x + y);
    }
    if (islem == '-')
    {
        sonuc = (x - y);
    }
    if (islem == '*')
    {
        sonuc = (x * y);
    }
    if (islem == '/')
    {
        sonuc = (x / y);
    }

    cin >> d;
    if (d != 13)
    {

        while (1)
        {

            cin >> z;
            if (z == 13)
            {
                cout << "sonuc: " << sonuc;
                break;
            }
            else
            {
                cin >> islem;
                if (islem == '+')
                {
                    sonuc = (sonuc + z);
                }
                if (islem == '-')
                {
                    sonuc = (sonuc - z);
                }
                if (islem == '*')
                {
                    sonuc = (sonuc * z);
                }
                if (islem == '/')
                {
                    sonuc = (sonuc / z);
                }
                cin >> d;
                if (d != 13)
                {
                    continue;
                }
                else
                {
                    cout << "sonuc: " << sonuc << endl;
                    break;
                }
            }
        }
    }

    else
    {
        cout << "sonuc: " << sonuc << endl;
    }

    return 0;
}

/// etap 2
#include <iostream>
using namespace std;

int main()
{

    char islem;
    int sonuc = 0, x, y;

    cout << "İslemi giriniz. isleminiz bitince nokta koyunuz: ";
    cin >> x;
    sonuc = x;

    while (cin >> islem)
    {

        if (islem == '+')
        {
            cin >> y;
            sonuc += y;
            continue;
        }
        else if (islem == '-')
        {
            cin >> y;
            sonuc -= y;
            continue;
        }
        else if (islem == '*')
        {
            cin >> y;
            sonuc *= y;
            continue;
        }
        else if (islem == '/')
        {
            cin >> y;
            sonuc = sonuc / y;
            continue;
        }

        else
        {
            cout << "sonuc: " << sonuc;
            break;
        }
    }

    return 0;
}

// fixed version1
#include <iostream>
using namespace std;

int main()
{
    char islem;
    long double sonuc = 0, x, y, d = 1, z, isinizbittimi = 1;
    cout << "\t\t\t\t\t~~Hesap Makinesi~~" << endl;

    while (isinizbittimi)
    {
        cout << "İlk sayiyi giriniz: ";
        cin >> x;
        cout << "Diger sayiyi giriniz: ";
        cin >> y;
        cout << "Yapmak istediginiz islemi giriniz: ";
        cin >> islem;

        while (1)
        {
            if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
            {
                break;
            }
            else
            {
                cout << "olmayan islem girdiniz. tekrar deneyiniz:  ";
                cin >> islem;
            }
        }

        if (islem == '+')
        {
            sonuc = (x + y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '-')
        {
            sonuc = (x - y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '*')
        {
            sonuc = (x * y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '/')
        {
            sonuc = (x / y);
            cout << "sonuc: " << sonuc << endl;
        }

        d = 1;
        while (d)
        {
            cout << sonuc << " sonucundan devam etmek ister misiniz, yoksa farklı bir yol mu izleyeceksin? evet ise 1 hayir ise 0'a basiniz: ";
            cin >> d;

            if (d == 0)
                break;

            cout << "Diğer sayiyi giriniz: ";
            cin >> z;
            cout << "Yapmak istediginiz islemi giriniz: ";
            cin >> islem;

            while (1)
            {
                if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
                {
                    break;
                }
                else
                {
                    cout << "olmayan islem girdiniz. tekrar deneyiniz:  ";
                    cin >> islem;
                }
            }

            if (islem == '+')
            {
                sonuc = (sonuc + z);
                cout << "sonuc: " << sonuc << endl;
            }
            if (islem == '-')
            {
                sonuc = (sonuc - z);
                cout << "sonuc: " << sonuc << endl;
            }
            if (islem == '*')
            {
                sonuc = (sonuc * z);
                cout << "sonuc: " << sonuc << endl;
            }
            if (islem == '/')
            {
                sonuc = (sonuc / z);
                cout << "sonuc: " << sonuc << endl;
            }
        }

        cout << "Hesap makinesini tekrar kullanmak ister misiniz? ever ise bir hayir ise sifira basiniz: ";
        cin >> isinizbittimi;
        if (isinizbittimi == 0)
            break;
    }

    return 0;
}

/////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main()
{
    char islem;
    long double sonuc = 0, x, y, d = 1, z, isinizbittimi = 1;
    cout << "\t\t\t\t\t~~Hesap Makinesi~~" << endl;

    while (isinizbittimi)
    {
        cout << "İlk sayiyi giriniz: ";
        cin >> x;
        cout << "Diger sayiyi giriniz: ";
        cin >> y;
        cout << "Yapmak istediginiz islemi giriniz: ";
        cin >> islem;

        while (1)
        {
            if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
            {
                break;
            }
            else
            {
                cout << "olmayan islem girdiniz. tekrar deneyiniz:  ";
                cin >> islem;
            }
        }

        if (islem == '+')
        {
            sonuc = (x + y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '-')
        {
            sonuc = (x - y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '*')
        {
            sonuc = (x * y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '/')
        {
            sonuc = (x / y);
            cout << "sonuc: " << sonuc << endl;
        }

        d = 1;
        while (d)
        {
            cout << sonuc << " sonucundan devam etmek ister misiniz, yoksa farklı bir yol mu izleyeceksin? evet ise 1 hayir ise 0'a basiniz: ";
            cin >> d;

            if (d == 0)
                break;

            cout << "Diğer sayiyi giriniz: ";
            cin >> z;
            cout << "Yapmak istediginiz islemi giriniz: ";
            cin >> islem;

            while (1)
            {
                if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
                {
                    break;
                }
                else
                {
                    cout << "olmayan islem girdiniz. tekrar deneyiniz:  ";
                    cin >> islem;
                }
            }

            if (islem == '+')
            {
                sonuc = (sonuc + z);
                cout << "sonuc: " << sonuc << endl;
            }
            if (islem == '-')
            {
                sonuc = (sonuc - z);
                cout << "sonuc: " << sonuc << endl;
            }
            if (islem == '*')
            {
                sonuc = (sonuc * z);
                cout << "sonuc: " << sonuc << endl;
            }
            if (islem == '/')
            {
                sonuc = (sonuc / z);
                cout << "sonuc: " << sonuc << endl;
            }
        }

        cout << "Hesap makinesini tekrar kullanmak ister misiniz? ever ise bir hayir ise sifira basiniz: ";
        cin >> isinizbittimi;
        if (isinizbittimi == 0)
            break;
    }

    return 0;
}

///////////////////
#include <iostream>
using namespace std;

int main()
{
    char *p1, *p2;
    char islem;
    long double sonuc = 0, x, y, z;
    char isinizbittimi[10], d[10];
    cout << "\t\t\t\t\t~~Hesap Makinesi~~" << endl;

    *p1 = d[1];

    while (isinizbittimi)
    {
        cout << "İlk sayiyi giriniz: ";
        cin >> x;
        cout << "Diger sayiyi giriniz: ";
        cin >> y;
        cout << "Yapmak istediginiz islemi giriniz: ";
        cin >> islem;

        while (1)
        {
            if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
            {
                break;
            }
            else
            {
                cout << "olmayan islem girdiniz. tekrar deneyiniz:  ";
                cin >> islem;
            }
        }

        if (islem == '+')
        {
            sonuc = (x + y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '-')
        {
            sonuc = (x - y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '*')
        {
            sonuc = (x * y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '/')
        {
            sonuc = (x / y);
            cout << "sonuc: " << sonuc << endl;
        }

        while (1)
        {
            cout << sonuc << " sonucundan devam etmek ister misiniz, yoksa farklı bir yol mu izleyeceksin? ";
            cin >> *p1;

            if (*p1 == 'h')
                break;
        }
        while (1)
        {
            if (*p1 == 'e')
                break;

            else
            {
                cout << "evet ya da hayir cevabi vermelisiniz.Cevabinizi giriniz: ";
                cin >> d;
            }
        }

        cout << "Diğer sayiyi giriniz: ";
        cin >> z;
        cout << "Yapmak istediginiz islemi giriniz: ";
        cin >> islem;

        while (1)
        {
            if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
            {
                break;
            }
            else
            {
                cout << "olmayan islem girdiniz. tekrar deneyiniz:  ";
                cin >> islem;
            }
        }

        if (islem == '+')
        {
            sonuc = (sonuc + z);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '-')
        {
            sonuc = (sonuc - z);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '*')
        {
            sonuc = (sonuc * z);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '/')
        {
            sonuc = (sonuc / z);
            cout << "sonuc: " << sonuc << endl;
        }
    }

    cout << "Hesap makinesini tekrar kullanmak ister misiniz? ";
    cin >> isinizbittimi;

    while (1)
    {
        if (isinizbittimi == "evet")
            break;

        else
        {
            cout << "evet ya da hayir cevabi vermelisiniz.Cevabinizi giriniz: ";
            cin >> isinizbittimi;
        }
    }

    return 0;
}

/////////////////////////////////////////////////////
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char dizi1[10], dizi2[10];
    char islem;
    long double sonuc = 0, x, y, z;
    cout << "\t\t\t\t\t~~Hesap Makinesi~~" << endl;

    while (1)
    {
        cout << "İlk sayiyi giriniz: ";
        cin >> x;
        cout << "Diger sayiyi giriniz: ";
        cin >> y;
        cout << "Yapmak istediginiz islemi giriniz: ";
        cin >> islem;

        while (1)
        {
            if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
            {
                break;
            }
            else
            {
                cout << "olmayan islem girdiniz. tekrar deneyiniz:  ";
                cin >> islem;
            }
        }

        if (islem == '+')
        {
            sonuc = (x + y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '-')
        {
            sonuc = (x - y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '*')
        {
            sonuc = (x * y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '/')
        {
            sonuc = (x / y);
            cout << "sonuc: " << sonuc << endl;
        }

        while (1)
        {
            cout << sonuc << " sonucundan devam etmek ister misiniz? " << endl;
            cin >> dizi1;

            if (strcmp(dizi1, "hayir") == 0)
                break;

            else if (strcmp(dizi1, "evet") == 0)
            {

                cout << "Diğer sayiyi giriniz: ";
                cin >> z;
                cout << "Yapmak istediginiz islemi giriniz: ";
                cin >> islem;

                while (1)
                {
                    if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
                    {
                        break;
                    }
                    else
                    {
                        cout << "olmayan islem girdiniz. tekrar deneyiniz:  ";
                        cin >> islem;
                    }
                }

                if (islem == '+')
                {
                    sonuc = (sonuc + z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
                if (islem == '-')
                {
                    sonuc = (sonuc - z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
                if (islem == '*')
                {
                    sonuc = (sonuc * z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
                if (islem == '/')
                {
                    sonuc = (sonuc / z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
            }

            else
            {
                cout << "gecersiz cevap girdiniz. evet ve ya hayir giriniz" << endl;
                continue;
            }
        }

        cout << "Hesap makinesini tekrar kullanmak ister misiniz? ";
        cin >> dizi2;

        if (strcmp(dizi2, "hayir") == 0)
            break;

        else if (strcmp(dizi2, "evet") == 0)
            continue;

        else
        {
            while (1)
            {
                cout << "gecersiz cevap girdiniz. evet ya da hayiri deneyiniz: ";
                cin >> dizi2;
                return 123;
            }
        }
    }

    return 0;
}

/////////////////////////////
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char dizi1[10], dizi2[10];
    char islem;
    long double sonuc = 0, x, y, z;
    cout << "\t\t\t\t\t~~Hesap Makinesi~~" << endl;

    while (1)
    {
        cout << "İlk sayiyi giriniz: ";
        cin >> x;
        cout << "Diger sayiyi giriniz: ";
        cin >> y;
        cout << "Yapmak istediginiz islemi giriniz: ";
        cin >> islem;

        while (1)
        {
            if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
            {
                break;
            }
            else
            {
                cout << "Olmayan islem girdiniz. Tekrar deneyiniz:  ";
                cin >> islem;
            }
        }

        if (islem == '+')
        {
            sonuc = (x + y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '-')
        {
            sonuc = (x - y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '*')
        {
            sonuc = (x * y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '/')
        {
            sonuc = (x / y);
            cout << "sonuc: " << sonuc << endl;
        }

        while (1)
        {
            cout << sonuc << " sonucundan devam etmek ister misiniz? " << endl;
            cin >> dizi1;

            if (strcmp(dizi1, "hayir") == 0)
                break;

            else if (strcmp(dizi1, "evet") == 0)
            {

                cout << "Diğer sayiyi giriniz: ";
                cin >> z;
                cout << "Yapmak istediginiz islemi giriniz: ";
                cin >> islem;

                while (1)
                {
                    if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
                    {
                        break;
                    }
                    else
                    {
                        cout << "Olmayan islem girdiniz. Tekrar deneyiniz:  ";
                        cin >> islem;
                    }
                }

                if (islem == '+')
                {
                    sonuc = (sonuc + z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
                if (islem == '-')
                {
                    sonuc = (sonuc - z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
                if (islem == '*')
                {
                    sonuc = (sonuc * z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
                if (islem == '/')
                {
                    sonuc = (sonuc / z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
            }

            else
            {
                cout << "Gecersiz cevap girdiniz. Evet ve ya hayir giriniz" << endl;
                continue;
            }
        }

        cout << "Hesap makinesini tekrar kullanmak ister misiniz? ";
        cin >> dizi2;

        if (strcmp(dizi2, "hayir") == 0)
            break;

        else if (strcmp(dizi2, "evet") == 0)
            continue;

        else
        {
            while (1)
            {
                cout << "Gecersiz cevap girdiniz. Evet ya da hayir'i deneyiniz: ";
                cin >> dizi2;
                if (strcmp(dizi2, "hayir") == 0)
                    break;
                else if (strcmp(dizi2, "evet") == 0)
                    break;
            }

            if (strcmp(dizi2, "evet") == 0)
                continue;

            else if (strcmp(dizi2, "hayir") == 0)
                break;
        }
    }

    return 0;
}

/////////////
#include <iostream>
// #include <conio.h>
using namespace std;

long double answer(long double x, char islem, long double y)
{
    long double sonuc = 0;

    switch (islem)
    {
    case '+':
        sonuc = (x + y);
        break;
    case '-':
        sonuc = (x - y);
        break;
    case '*':
        sonuc = (x * y);
        break;
    case '/':
        sonuc = (x / y);
        break;

    default:
        cout << "Gecersiz islem girdiniz. Tekrar deneyiniz: ";
        cin >> islem;
        sonuc = answer(x, islem, y);
    }
    return sonuc;
}

int main()
{
    long double x = 0, y = 0, snc = 0;
    char islem;

    cout << "İlk sayiyi giriniz: ";
    cin >> x;
    cout << "yapmak istediginiz islemi giriniz: ";
    cin >> islem;
    cout << "Diger sayiyi giriniz: ";
    cin >> y;

    snc = answer(x, islem, y);
    cout << snc;

    return 0;
}

///
#include <iostream>
// #include <conio.h>
using namespace std;

long double answer(long double x, char islem, long double y)
{
    long double sonuc = 0;

    switch (islem)
    {
    case '+':
        sonuc = (x + y);
        break;
    case '-':
        sonuc = (x - y);
        break;
    case '*':
        sonuc = (x * y);
        break;
    case '/':
        sonuc = (x / y);
        break;

    default:
        sonuc = 0;
        break;
    }

    if (sonuc == 0)
    {
        cout << "Geçersiz işlem girdiniz. Tekrar deneyiniz: ";
        cin >> islem;
        sonuc = answer(x, islem, y);
    }

    return sonuc;
}

int main()
{
    long double x = 0, y = 0, snc = 0;
    char islem;

    cout << "İlk sayıyı giriniz: ";
    cin >> x;
    cout << "Yapmak istediğiniz işlemi giriniz: ";
    cin >> islem;
    cout << "Diğer sayıyı giriniz: ";
    cin >> y;

    snc = answer(x, islem, y);
    cout << snc;

    return 0;
}

/* else{
       cout<<"Gecersiz cevap giridiniz.Tekrar deneyiniz: ";
       continue;
   }*/

#include <iostream>
#include <cstring>
using namespace std;

long double answer(long double x, char *islem, long double y)
{
    long double sonuc = 0;

    switch (*islem)
    {
    case '+':
        sonuc = (x + y);
        break;
    case '-':
        sonuc = (x - y);
        break;
    case '*':
        sonuc = (x * y);
        break;
    case '/':
        sonuc = (x / y);
        break;

    default:
        sonuc = 0;
        break;
    }

    if (sonuc == 0)
    {
        cout << "Geçersiz işlem girdiniz. Tekrar deneyiniz: ";
        cin >> islem;
        sonuc = answer(x, islem, y);
    }

    return sonuc;
}

long double tekrar(long double sonuc)
{
    char islem[1], dizi1[5];
    long double z = 0, cevap = 0;

    cout << "isleminizi giriniz: ";
    cin >> islem;
    cout << "diger sayiyi giriniz: ";
    cin >> z;
    cevap = answer(sonuc, islem, z);
    cout << cevap << endl;
    cout << cevap << " sonucundan devam etmek ister misiniz?" << endl;
    cin >> dizi1;
    if (strcmp(dizi1, "evet") == 0)
    {
        cevap = tekrar(cevap);
    }
    else if (strcmp(dizi1, "hayir") == 0)
        return 0;
}

int main()
{
    long double x = 0, y = 0, snc = 0;
    char islem[1], dizi1[5], dizi2[5];

    while (1)
    {
        cout << "İlk sayıyı giriniz: ";
        cin >> x;
        cout << "Yapmak istediğiniz işlemi giriniz: ";
        cin >> islem;
        cout << "Diğer sayıyı giriniz: ";
        cin >> y;

        snc = answer(x, islem, y);
        cout << snc << endl;
        cout << snc << " sonucundan devam etmek ister misiniz?" << endl;
        cin >> dizi1;

        if (strcmp(dizi1, "evet") == 0)
            snc = tekrar(snc);
        else if (strcmp(dizi1, "hayir") == 0)
            snc = 0;

        if (snc == 0)
        {
            cout << "hesap makinesi tekrar kullanmak ister misiniz: ";
            cin >> dizi2;
            if (strcmp(dizi1, "evet") == 0)
                continue;

            else
                break;
        }
    }
    return 0;
}





////////////////////////////////////////////// last one pt2
#include <iostream>
#include <cstring>
using namespace std;

long double tekrar(long double sonuc);

long double answer(long double x, char *islem, long double y){
    long double sonuc=0;
    
   switch(*islem){
        case '+': sonuc=(x+y); break;
        case '-': sonuc=(x-y); break;
        case '*': sonuc=(x*y); break;
        case '/': sonuc=(x/y); break;
        
        default:
            sonuc=0;
            break;
    }
    
    if(sonuc==0) {
         cout << "Geçersiz işlem girdiniz. Tekrar deneyiniz: ";
            cin >> islem;
            sonuc = answer(x, islem, y);
    }
    
    return sonuc;
}

int YesOrNo( char *dizi,long double sonuc){
    char dizii[5];
     if(strcmp(dizi,"evet")==0) {
       tekrar(sonuc);
    }
    else if(strcmp(dizi,"hayir")==0) return 0;
   else{
        cout<<"Gecersiz cevap giridiniz.Tekrar deneyiniz: ";
        cin>>dizii;
        YesOrNo(dizii,sonuc);
    }
    
}

long double tekrar(long double sonuc){
    char islem[1],dizi1[5];
    long double z=0,cevap=0;
    
    cout<<"isleminizi giriniz: ";
    cin>>islem;
    cout<<"diger sayiyi giriniz: ";
    cin>>z;
    cevap=answer(sonuc,islem,z);
    cout<<cevap<<endl;
    cout<<cevap<<" sonucundan devam etmek ister misiniz?"<<endl;
    cin>>dizi1;
    cevap=YesOrNo(dizi1,cevap);
    
    if(cevap==0) return 0;
}




int main() {
    long double x=0, y=0, snc=0;
    char islem[1],dizi1[5],dizi2[5];
    
    while(1){
    cout << "İlk sayıyı giriniz: ";
    cin >> x;
    cout << "Yapmak istediğiniz işlemi giriniz: ";
    cin >> islem;
    cout << "Diğer sayıyı giriniz: ";
    cin >> y;
    
    snc = answer(x, islem, y);
    cout << snc<<endl;
     cout<<snc<<" sonucundan devam etmek ister misiniz?"<<endl;
    cin>>dizi1;
    snc=YesOrNo(dizi1,snc);
   
    if(snc==0){
        cout<<"hesap makinesi tekrar kullanmak ister misiniz: ";
        cin>>dizi2;
        
         if(strcmp(dizi2,"evet")==0) 
       continue;
    
    else if(strcmp(dizi2,"hayir")==0) break;
    }
}
    return 0;
}




///////////////////// pt1
#include <iostream>
#include <cstring>
using namespace std;

long double answer(long double x, char *islem, long double y)
{
    long double sonuc = 0;

    switch (*islem)
    {
    case '+':sonuc = (x + y); break;
    case '-':sonuc = (x - y); break;
    case '*': sonuc = (x * y); break;
    case '/':sonuc = (x / y); break;
    default: sonuc = 0;       break;
    }

    if (sonuc == 0)
    {
        cout << "Geçersiz işlem girdiniz. Tekrar deneyiniz: ";
        cin >> islem;
        sonuc = answer(x, islem, y);
    }

    return sonuc;
}

long double tekrar(long double sonuc)
{
    char islem[1], dizi1[5];
    long double z = 0, cevap = 0;

    cout << "isleminizi giriniz: ";
    cin >> islem;
    cout << "diger sayiyi giriniz: ";
    cin >> z;
    cevap = answer(sonuc, islem, z);
    cout << cevap << endl;
    cout << cevap << " sonucundan devam etmek ister misiniz?" << endl;
    cin >> dizi1;
    if (strcmp(dizi1, "evet") == 0)
    {
        cevap = tekrar(cevap);
    }
    else if (strcmp(dizi1, "hayir") == 0)
        return 0;
}

int main()
{
    long double x = 0, y = 0, snc = 0;
    char islem[1], dizi1[5], dizi2[5];

    while (1)
    {
        cout << "İlk sayıyı giriniz: ";
        cin >> x;
        cout << "Yapmak istediğiniz işlemi giriniz: ";
        cin >> islem;
        cout << "Diğer sayıyı giriniz: ";
        cin >> y;

        snc = answer(x, islem, y);
        cout << snc << endl;
        cout << snc << " sonucundan devam etmek ister misiniz?" << endl;
        cin >> dizi1;

        if (strcmp(dizi1, "evet") == 0)
            snc = tekrar(snc);
        else if (strcmp(dizi1, "hayir") == 0)
            snc = 0;

        if (snc == 0)
        {
            cout << "hesap makinesi tekrar kullanmak ister misiniz: ";
            cin >> dizi2;
            if (strcmp(dizi2, "evet") == 0)
                continue;
                else break;
        }
        
    }
    return 0;
}








//////////////////////////fail1
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char dizi1[10], dizi2[10];
    char islem;
    long double sonuc = 0, x, y, z;
    cout << "\t\t\t\t\t~~Hesap Makinesi~~" << endl;

    while (1)
    {
        cout << "İlk sayiyi giriniz: ";
        cin >> x;
        cout << "Diger sayiyi giriniz: ";
        cin >> y;
        cout << "Yapmak istediginiz islemi giriniz: ";
        cin >> islem;

        while (1)
        {
            if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
            {
                break;
            }
            else
            {
                cout << "Olmayan islem girdiniz. Tekrar deneyiniz:  ";
                cin >> islem;
            }
        }

        if (islem == '+')
        {
            sonuc = (x + y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '-')
        {
            sonuc = (x - y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '*')
        {
            sonuc = (x * y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '/')
        {
            sonuc = (x / y);
            cout << "sonuc: " << sonuc << endl;
        }

        while (1)
        {
            cout << sonuc << " sonucundan devam etmek ister misiniz? " << endl;
            cin >> dizi1;

            if (strcmp(dizi1, "hayir") == 0)
                break;

            else if (strcmp(dizi1, "evet") == 0)
            {

                cout << "Diğer sayiyi giriniz: ";
                cin >> z;
                cout << "Yapmak istediginiz islemi giriniz: ";
                cin >> islem;

                while (1)
                {
                    if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
                    {
                        break;
                    }
                    else
                    {
                        cout << "Olmayan islem girdiniz. Tekrar deneyiniz:  ";
                        cin >> islem;
                    }
                }

                if (islem == '+')
                {
                    sonuc = (sonuc + z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
                if (islem == '-')
                {
                    sonuc = (sonuc - z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
                if (islem == '*')
                {
                    sonuc = (sonuc * z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
                if (islem == '/')
                {
                    sonuc = (sonuc / z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
            }

            else
            {
                cout << "Gecersiz cevap girdiniz. Evet ve ya hayir giriniz" << endl;
                continue;
            }
        }

        cout << "Hesap makinesini tekrar kullanmak ister misiniz? ";
        cin >> dizi2;

        if (strcmp(dizi2, "hayir") == 0)
            break;

        else if (strcmp(dizi2, "evet") == 0)
            continue;

        else
        {
            while (1)
            {
                cout << "Gecersiz cevap girdiniz. Evet ya da hayir'i deneyiniz: ";
                cin >> dizi2;
                if (strcmp(dizi2, "hayir") == 0)
                    break;
                else if (strcmp(dizi2, "evet") == 0)
                    break;
            }

            if (strcmp(dizi2, "evet") == 0)
                continue;

            else if (strcmp(dizi2, "hayir") == 0)
                break;
        }
    }

    return 0;
}




////////////////////////////////////////////////////

#include <iostream>
#include <cstring>
using namespace std;

long double answer(long double x, char *islem, long double y)
{
    long double sonuc = 0;

    switch (*islem)
    {
    case '+':sonuc = (x + y); break;
    case '-':sonuc = (x - y); break;
    case '*': sonuc = (x * y); break;
    case '/':sonuc = (x / y); break;
    default: sonuc = 0;       break;
    }

    if (sonuc == 0)
    {
    cout << "Geçersiz işlem girdiniz. Tekrar deneyiniz: ";
    cin >> islem;
    sonuc = answer(x, islem, y);
    }

    return sonuc;
}

long double tekrar(long double sonuc)
{
    char islem[1], dizi1[5];
    long double z = 0, cevap = 0;

    cout << "isleminizi giriniz: ";
    cin >> islem;
    cout << "diger sayiyi giriniz: ";
    cin >> z;
    cevap = answer(sonuc, islem, z);
    cout << cevap << endl;
    cout << cevap << " sonucundan devam etmek ister misiniz?" << endl;
    cin >> dizi1;
    if (strcmp(dizi1, "evet") == 0)
    {
        cevap = tekrar(cevap);
    }
    else if (strcmp(dizi1, "hayir") == 0)
        return 0;
}

long double Devammi(sonuc){
    char dizi[5],dizi1[5];
    long double n=0;
    cout<<sonuc<<" sonucundan devam etmek ister misiniz? ";
    cinn>>dizi;
    if(strcmp(dizi,"evet")==0) n=tekrar(sonuc);
    else{
        cout<<"hesap makinesini tekrar kullanmak ister misiniz? ";
        cin>>dizi1;
        if(strcmp(dizi1,"evet")==0) return 1;
        else return n;
    }
}

int main()
{
    long double x = 0, y = 0, snc = 0,fa;
    char islem[1], dizi1[5], dizi2[5];

    while (1)
    {
        cout << "İlk sayıyı giriniz: ";
        cin >> x;
        cout << "Yapmak istediğiniz işlemi giriniz: ";
        cin >> islem;
        cout << "Diğer sayıyı giriniz: ";
        cin >> y;

        snc = answer(x, islem, y);
        cout << snc << endl;
        fa=Devammi(snc);
        if(fa==1) continue;
        else break;        
    }
    return 0;
}




///////////////////////
#include <iostream>
#include <cstring>
using namespace std;
int fa;
void tekrar(long double sonuc);

long double answer(long double x, char *islem, long double y)
{
    long double sonuc = 0;
    char islem2[1];

    switch (*islem)
    {
    case '+':sonuc = (x + y); break;
    case '-':sonuc = (x - y); break;
    case '*': sonuc = (x * y); break;
    case '/':sonuc = (x / y); break;
    default: { cout << "Geçersiz işlem girdiniz. Tekrar deneyiniz: ";
    cin >> islem2;
    answer(x, islem2, y); }
        break;
    }
    return sonuc;
}

void Devammi(long double sonuc){
    char dizi[5],dizi1[5];
    cout<<sonuc<<" sonucundan devam etmek ister misiniz? ";
    cin>>dizi;
    if(strcmp(dizi,"evet")==0) tekrar(sonuc);
    
    else if (strcmp(dizi,"hayir")==0){
        cout<<"hesap makinesini tekrar kullanmak ister misiniz? ";
        cin>>dizi1;
        if(strcmp(dizi1,"evet")==0) fa=1;
        else  fa=0;
    }
}

void tekrar(long double sonuc)
{
    char islem[1], dizi1[5];
    long double z = 0, cevap = 0;

    cout << "isleminizi giriniz: ";
    cin >> islem;
    cout << "diger sayiyi giriniz: ";
    cin >> z;
    cevap = answer(sonuc, islem, z);
    cout << cevap << endl;
    Devammi(cevap);
}


int main()
{
    long double x = 0, y = 0, snc = 0;
    char islem[1], dizi1[5], dizi2[5];

    while (1)
    {
        cout << "İlk sayıyı giriniz: ";
        cin >> x;
        cout << "Yapmak istediğiniz işlemi giriniz: ";
        cin >> islem;
        cout << "Diğer sayıyı giriniz: ";
        cin >> y;
        snc = answer(x, islem, y);
        cout << snc << endl;
        Devammi(snc);
        if(fa==1) continue;
        else break;        
    }
    return 0;
}



////////////////////////////////
#include <iostream>
#include <cstring>
using namespace std;

int fa;

long double answer(long double x, char *islem, long double y)
{
    long double sonuc = 0;
    char islem2[2];

    switch (*islem)
    {
    case '+':
        sonuc = (x + y);
        break;
    case '-':
        sonuc = (x - y);
        break;
    case '*':
        sonuc = (x * y);
        break;
    case '/':
        sonuc = (x / y);
        break;
    default:
        cout << "Geçersiz işlem girdiniz. Tekrar deneyiniz: ";
        cin >> islem2;
        sonuc = answer(x, islem2, y);
        break;
    }
    return sonuc;
}

void Devammi(long double sonuc)
{
    char dizi[5], dizi1[5];
    cout << sonuc << " sonucundan devam etmek ister misiniz? ";
    cin >> dizi;
    if (strcmp(dizi, "evet") == 0)
        tekrar(sonuc);
    else if (strcmp(dizi, "hayir") == 0)
    {
        cout << "hesap makinesini tekrar kullanmak ister misiniz? ";
        cin >> dizi1;
        if (strcmp(dizi1, "evet") == 0)
            fa = 1;
        else
            fa = 0;
    }
}

void tekrar(long double sonuc)
{
    char islem[2];
    long double z = 0, cevap = 0;

    cout << "isleminizi giriniz: ";
    cin >> islem;
    cout << "diger sayiyi giriniz: ";
    cin >> z;
    cevap = answer(sonuc, islem, z);
    cout << cevap << endl;
    Devammi(cevap);

    // tekrar fonksiyonunun sonunda fa değişkenini kontrol etmeliyiz
    if (fa == 1)
        tekrar(cevap);
}

int main()
{
    long double x = 0, y = 0, snc = 0;
    char islem[2], dizi1[5];

    while (true)
    {
        cout << "İlk sayıyı giriniz: ";
        cin >> x;
        cout << "Yapmak istediğiniz işlemi giriniz: ";
        cin >> islem;
        cout << "Diğer sayıyı giriniz: ";
        cin >> y;
        snc = answer(x, islem, y);
        cout << snc << endl;
        Devammi(snc);
        if (fa == 1)
            continue;
        else
            break;
    }
    return 0;
}



//////////////////////////
#include <iostream>
#include <cstring>
using namespace std;
int fa;
void tekrar(long double sonuc);

long double answer(long double x, char *islem, long double y)
{
    long double sonuc = 0;
    char islem2[1];

    switch (*islem)
    {
    case '+':sonuc = (x + y); break;
    case '-':sonuc = (x - y); break;
    case '*': sonuc = (x * y); break;
    case '/':sonuc = (x / y); break;
    default: { cout << "Geçersiz işlem girdiniz. Tekrar deneyiniz: ";
    cin >> islem2;
    sonuc=answer(x, islem2, y); break; }
    }
    return sonuc;
}

void Devammi(long double sonuc){
    char dizi[5],dizi1[5];
    cout<<sonuc<<" sonucundan devam etmek ister misiniz? ";
    cin>>dizi;
    if(strcmp(dizi,"evet")==0) tekrar(sonuc);
    
    else if (strcmp(dizi,"hayir")==0){
        cout<<"hesap makinesini tekrar kullanmak ister misiniz? ";
        cin>>dizi1;
        if(strcmp(dizi1,"evet")==0) fa=1;
        else  fa=0;
    }
}

void tekrar(long double sonuc)
{
    char islem[1], dizi1[5];
    long double z = 0, cevap = 0;

    cout << "isleminizi giriniz: ";
    cin >> islem;
    cout << "diger sayiyi giriniz: ";
    cin >> z;
    cevap = answer(sonuc, islem, z);
    cout << cevap << endl;
    Devammi(cevap);
}


int main()
{
    long double x = 0, y = 0, snc = 0;
    char islem[1], dizi1[5], dizi2[5];

    while (1)
    {
        cout << "İlk sayıyı giriniz: ";
        cin >> x;
        cout << "Yapmak istediğiniz işlemi giriniz: ";
        cin >> islem;
        cout << "Diğer sayıyı giriniz: ";
        cin >> y;
        snc = answer(x, islem, y);
        cout << snc << endl;
        Devammi(snc);
        if(fa==1) continue;
        else break;        
    }
    return 0;
}



////////////
#include <iostream>
#include <cstring>
using namespace std;
int fa;
void tekrar(long double sonuc);

long double answer(long double x, char *islem, long double y)
{
    long double sonuc = 0;
    char islem2[1];

    switch (*islem)
    {
    case '+':sonuc = (x + y); break;
    case '-':sonuc = (x - y); break;
    case '*': sonuc = (x * y); break;
    case '/':sonuc = (x / y); break;
    default: { cout << "Geçersiz işlem girdiniz. Tekrar deneyiniz: ";
    cin >> islem2;
    answer(x, islem2, y); }
        break;
    }
    return sonuc;
}

void Devammi(long double sonuc){
    char dizi[5],dizi1[5];
    cout<<sonuc<<" sonucundan devam etmek ister misiniz? ";
    cin>>dizi;
    if(strcmp(dizi,"evet")==0) tekrar(sonuc);
    
    else if (strcmp(dizi,"hayir")==0){
        cout<<"hesap makinesini tekrar kullanmak ister misiniz? ";
        cin>>dizi1;
        if(strcmp(dizi1,"evet")==0) fa=1;
        else  fa=0;
    }
}

void tekrar(long double sonuc)
{
    char islem[1], dizi1[5];
    long double z = 0, cevap = 0;

    cout << "isleminizi giriniz: ";
    cin >> islem;
    cout << "diger sayiyi giriniz: ";
    cin >> z;
    cevap = answer(sonuc, islem, z);
    cout << cevap << endl;
    Devammi(cevap);
}


int main()
{
    long double x = 0, y = 0, snc = 0;
    char islem[1], dizi1[5], dizi2[5];

    while (1)
    {
        cout << "İlk sayıyı giriniz: ";
        cin >> x;
        cout << "Yapmak istediğiniz işlemi giriniz: ";
        cin >> islem;
        cout << "Diğer sayıyı giriniz: ";
        cin >> y;
        snc = answer(x, islem, y);
        cout << snc << endl;
        Devammi(snc);
        if(fa==1) continue;
        else break;        
    }
    return 0;
}

//her şey tamam ama Devammi fonksiyonun else if kisminda yazdıığım kodlar istediğim gibi çalışmıyor mesela hesap makinesini tekrar kullanmak isterse maindeki while döngüsü continue olduğu için devam etmeli ama segmentetion fault veriyor.kodun sadece o kısmını düzeltip başka hiçbşr şeyi elleme lütfen 


///////////the old version
#include <iostream>
#include <cstring>
using namespace std;

long double answer(long double x, char *islem, long double y)
{
    long double sonuc = 0;

    switch (*islem)
    {
    case '+':sonuc = (x + y); break;
    case '-':sonuc = (x - y); break;
    case '*': sonuc = (x * y); break;
    case '/':sonuc = (x / y); break;
    default: sonuc = 0;       break;
    }

    if (sonuc == 0)
    {
        cout << "Geçersiz işlem girdiniz. Tekrar deneyiniz: "; //islem var mı yok mu kontrol eder
        cin >> islem;
        sonuc = answer(x, islem, y);
    }

    return sonuc;
}

long double tekrar(long double sonuc)
{
    char islem[1], dizi1[5];
    long double z = 0, cevap = 0;

    cout << "isleminizi giriniz: ";
    cin >> islem;
    cout << "diger sayiyi giriniz: ";
    cin >> z;
    cevap = answer(sonuc, islem, z);
    cout << cevap << endl;
    cout << cevap << " sonucundan devam etmek ister misiniz?" << endl;
    cin >> dizi1;
    if (strcmp(dizi1, "evet") == 0)
    {
        cevap = tekrar(cevap);
    }
    else if (strcmp(dizi1, "hayir") == 0)
        return 0;
}

int main()
{
    long double x = 0, y = 0, snc = 0;
    char islem[1], dizi1[5], dizi2[5];

    while (1)
    {
        cout << "İlk sayıyı giriniz: ";
        cin >> x;
        cout << "Yapmak istediğiniz işlemi giriniz: ";  //burada random bir sey girilirse program hatayi yakalar
        cin >> islem;
        cout << "Diğer sayıyı giriniz: ";
        cin >> y;

        snc = answer(x, islem, y);
        cout << snc << endl;
        cout << snc << " sonucundan devam etmek ister misiniz?" << endl;
        cin >> dizi1;

        if (strcmp(dizi1, "evet") == 0)
            snc = tekrar(snc);
        else if (strcmp(dizi1, "hayir") == 0)
            snc = 0;

        if (snc == 0)
        {
            cout << "hesap makinesi tekrar kullanmak ister misiniz: ";
            cin >> dizi2;
            if (strcmp(dizi2, "evet") == 0)
                continue;
                else break;
        }
        
    }
    return 0;
}


//////////////////
#include <iostream>
#include <cstring>
using namespace std;

int fa;

void tekrar(long double sonuc);

long double answer(long double x, char *islem, long double y)
{
    long double sonuc = 0;
    char islem2[10]; // İşlem dizisinin boyutunu artırdık

    switch (*islem)
    {
    case '+':
        sonuc = (x + y);
        break;
    case '-':
        sonuc = (x - y);
        break;
    case '*':
        sonuc = (x * y);
        break;
    case '/':
        sonuc = (x / y);
        break;
    default:
        cout << "Geçersiz işlem girdiniz. Tekrar deneyiniz: ";
        cin.clear(); // Önceki girişi temizle
        cin.ignore(256, '\n'); // Önceki girişi atla
        cin.getline(islem2, sizeof(islem2)); // Yeni girişi al
        sonuc = answer(x, islem2, y);
        break;
    }
    return sonuc;
}

int Devammi(long double sonuc)
{
    char dizi[6], dizi1[6];
    cout << sonuc << " sonucundan devam etmek ister misiniz? ";
    cin >> dizi;
    if (strcmp(dizi, "evet") == 0)
        tekrar(sonuc);

    else if (strcmp(dizi, "hayir") == 0)
    {
        cout << "hesap makinesini tekrar kullanmak ister misiniz? ";
        cin >> dizi1;
        if (strcmp(dizi1, "evet") == 0)
        {
            fa = 1;
        }
        else
            fa = 0;
    }
    return fa;
}

void tekrar(long double sonuc)
{
    char islem[10], dizi1[6];
    long double z = 0, cevap = 0;

    cout << "İslemi giriniz: ";
    cin.clear(); // Önceki girişi temizle
    cin.ignore(256, '\n'); // Önceki girişi atla
    cin.getline(islem, sizeof(islem)); // Yeni girişi al
    cout << "Diğer sayıyı giriniz: ";
    cin >> z;
    cevap = answer(sonuc, islem, z);
    cout << cevap << endl;
    Devammi(cevap);
}

int main()
{
    long double x = 0, y = 0, snc = 0;
    char islem[10], dizi1[6], dizi2[6];

    while (1)
    {
        cout << "İlk sayıyı giriniz: ";
        cin >> x;
        cout << "Yapmak istediğiniz işlemi giriniz: ";
        cin.clear(); // Önceki girişi temizle
        cin.ignore(256, '\n'); // Önceki girişi atla
        cin.getline(islem, sizeof(islem)); // Yeni girişi al
        cout << "Diğer sayıyı giriniz: ";
        cin >> y;
        snc = answer(x, islem, y);
        cout << snc << endl;
        fa = Devammi(snc);
        if (fa == 1)
            continue;
        else
            break;
    }
    return 0;
}
