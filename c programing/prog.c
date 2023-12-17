
// sayı sıralama
int main()
{
    int x, y, z, max;

    printf("1. sayıyı giriniz: ");
    scanf("%d", &x);
    printf("2. sayıyı giriniz: ");
    scanf("%d", &y);
    printf("3. sayıyı giriniz: ");
    scanf("%d", &z);

    if (x > y)
        max = x;
    else
        max = y;

    if (max > z)
        printf("En büyük sayı: %d\n", max);
    else
        printf("En büyük sayı: %d\n", z);

    return 0;
}

// hesap makinesi
int main()
{
    int s1, s2;
    float sonuc;
    int islem;

    printf("sayı giriniz: ");
    scanf("%d", &s1);
    printf("sayı giriniz: ");
    scanf("%d", &s2);
    printf("topla=1 ,cıkar=2, bol=3, carp=4 bir islem secınız: ");
    scanf("%d", &islem);

    if (islem == 1)
    {
        sonuc = s1 + s1;
        printf("toplam= %f", sonuc);
    }
    else if (islem == 2)
    {
        if (s1 < s2)
        {
            sonuc = s2 - s1;
            printf("fark= %f ", sonuc);
        }
        else
        {
            sonuc = s1 - s2;
            printf("fark= %f", sonuc);
        }
    }
    else if (islem == 4)
    {
        sonuc = s1 * s2;
        printf("carpım: %f", sonuc);
    }
    else
    {
        sonuc = s1 / s2;
        printf("bolum= %f", sonuc);
    }

    return 0;
}

// en büyük üc basamaklı asal sayı
// hatalı vers

int main()
{
    long long int x, cift, sayac = 0, i;
    for (x = 999; x >= 100; x--)
    {
        if (x % 2 == 0)
        {
            cift = x;
            break;
        }
        else
        {

            for (i = 2; i = x / 2; i++)
            {
                if (x % i != 0)
                {
                    printf("en buyuk asal sayı: %lld", x);
                    break;
                }

                else
                {
                    continue;
                }
            }
        }
    }
    return 0;
}

// ikinci version (yine yanlış)

int main()
{
    long long int x, i;
    for (x = 999; x >= 100; x--)
    {
        if (x % 2 == 0)
        {
            break;
        }

        else
        {
            for (i = 2; i = x / 2; i++)
            {
                if (x % i == 0)
                {
                    continue;
                }

                else
                {
                    printf("en buyuk asal sayı: %lld", x);
                    break;
                }
            }
        }
    }
    return 0;
}

// cok yaklastııııııııımmmmmmm

int main()
{
    long long int x, i, asaldegil, asal;
    for (x = 999; x >= 100; x--)
    {
        if (x % 2 == 0)
        {
            continue;
        }

        else
        {
            for (i = 3; i < x; i++)
            {
                if (x % i == 0)
                {
                    asaldegil = x;
                    continue;
                }

                else
                {
                    asal = x;
                    printf("en buyuk asal sayı: %lld", asal);
                    break;
                }
            }
        }
    }

    return 0;
}

// 926546846135. deneme

int main()
{
    long long int x, i;
    int sayac = 2;

    for (x = 999; x >= 100; x--)
    {
        if (x % 2 == 0)
        {
            continue;
        }

        else
        {
            for (i = 3; i < x; i++)
            {
                if (x % i == 0)
                {
                    sayac = sayac + 1;
                    continue;
                }

                if (sayac < 3)
                {
                    printf("en buyuk asal sayı: %lld", x);
                    break;
                }
            }
        }
    }
    return 0;
}

// LAAAAANNNNN(son hali böyle en büyük asal sayıyı yazdırıyor ve doğru ama devamını da yazıyor.)

int main()
{

    long long int x, i;
    int noasalsayac = 2;

    for (x = 999; x >= 100; x--)
    {
        if (x % 2 == 0)
        {
            continue;
        }

        else
        {
            for (i = 3; i < x; i++)
            {
                if (x % i == 0)
                {
                    noasalsayac += 1;
                    break;
                }
                else
                {
                    printf("asal sayı: %lld \n", x);
                    break;
                }
            }
        }
    }

    return 0;
}

// aralarında asallar
int main()
{
    int x, xincarpanlari, i;
    printf("bir sayıgiriniz: ");
    scanf("%d", &x);

    for (i = 2; i <= (x / 2); i++)
    {
        if (x % i == 0)
        {
            xincarpanlari = i;
            printf("gs nin carpanları: %d \n", xincarpanlari);
            continue;
        }
    }

    return 0;
} // çarpan yazdrıma adımı

// girilen sayıları aa karşılaştırma adımı;
int main()
{
    int x, xincarpanlari, i, y, yincarpanlari, a;
    printf("bir sayıgiriniz: ");
    scanf("%d", &x);
    printf("bir sayıgiriniz: ");
    scanf("%d", &y);

    for (i = 2; i <= x; i++)
    {
        if (x % i == 0)
        {
            xincarpanlari = i;
            continue;
        }
    }

    for (a = 2; a <= y; a++)
    {
        if (y % a == 0)
        {
            yincarpanlari = a;
            continue;
        }
    }

    if (xincarpanlari = yincarpanlari)
    {
        printf("%d ve %d aralarında asal degil.", x, y);
    }
    else
        printf("%d ve %d aralarında asal", x, y);

    return 0;
}

// sayıları yazdırdım hepsini ama asal olmayanları elemedi
int main()
{
    int x, sayi, noasal = 0, a;

    for (x = 1; x < 10; x++)
    {
        sayi = (x * 10) + 03;
        for (a = 2; a < sayi; a++)
        {
            if (sayi % a == 0)
            {
                noasal += 1;
                continue;
            }
            else
            {
                printf("%d asaldır \n", sayi);
                break;
            }
        }
    }

    return 0;
}

// sonsuz döngüde 0<x<100 arası tek sayıları yazdırma
int main()
{
    int x = 0;
    while (1)
    {
        if (x % 2 == 1)
            printf("tek sayılar %d \n", x);

        x++;

        if (x >= 100)
            break;
    }

    return 0;
}

// sonsuz döngü 0<x<100 arası çift sayıların toplamını yazfıran program
int main()
{
    int cifttoplam = 0, x;
    while (1)
    {
        if (x % 2 == 0)
        {
            cifttoplam = cifttoplam + x;
        }
        x++;

        if (x > 100)
            break;
    }

    printf("cift sayıların toplamı: %d \n", cifttoplam);

    return 0;
}

// yanlıs 3
int main()
{
    int a, x = 10, cift = 0;
    while (1)
    {
        for (a = 3; a < 100; a++)
        {
            if (x % 2 == 0)
            {
                x++;
            }

            if (x % a == 0)
            {
                x++;
            }
            else
            {
                printf("asal sayılar: %d \n", x);
                x++;
                continue;
            }
        }

        if (x > 100)
            break;

        else
        {
            x++;
            break;
        }
    }

    return 0;
}

// a3
int main()
{
    int x, a, sayi, min, max;
    for (a = 1; a < 10; a++)
    {
        sayi = (a * 10) + 03;

        for (x = 3; x < sayi; x++)
        {
            if (sayi % x == 0)
                break;

            else
            {
                printf("asal sayılar: %d \n", sayi);
                break;
            }
        }
    }

    return 0;
}

/*hocaya koydum
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tahmin;

    printf("1-100 arasi bir sayi tuttum. tahmin edebilir misin?\n");


   srand(time(//NULL));
    int r1= rand() % 100+1;



    while(1){
        printf("tahmininizi giriniz:");
        scanf("%d" ,&tahmin);

        if(tahmin==r1){
            printf("dogru tahmin");
          break;
        }

        else if(tahmin<r1){
          printf("tahmininiz tuttugum sayisan kücük. Tekrar tahmin ediniz.");
      }

       else{
           printf("tahmininiz tuttugum sayisan buyuk. Tekrar tahmin ediniz");
        }
  }
    return 0;
}
*/

//***********************MİNDEĞER***************************************

// #include <stdio.h>

int main()
{
    int a, x, sayi, mindeger = 0, maxdeger = 0;
    for (a = 1; a < 10; a++)
    {
        sayi = (a * 10) + 03;

        for (x = 3; x < sayi; x++)
        {
            if (sayi % x == 0)
                break;

            else
            {
                mindeger = sayi;
                printf("mindeger: %d \n", mindeger);
                goto otherLoop;
            }
        }
    }

otherLoop:
    for (a = 2; a < 10; a++)
    {
        sayi = (a * 10) + 03;

        for (x = 3; x < sayi; x++)
        {
            if (sayi % x == 0)
                break;

            else if (maxdeger < sayi)
                maxdeger = sayi;

            else if (maxdeger > 80)
                printf("max değer: %d\n", maxdeger);

            else
                return 5;
        }
    }
    return 0;
}

// #include <stdio.h>  ******A3 TOPLAM YAZDIRDI*******

int main()
{
    int a, x, sayi, mindeger = 0, maxdeger = 0, toplam = 0;
    for (a = 1; a < 10; a++)
    {
        sayi = (a * 10) + 03;

        for (x = 3; x < sayi; x++)
        {
            if (sayi % x == 0)
                break;

            else
            {
                mindeger = sayi;
                printf("mindeger: %d \n", mindeger);
                goto otherLoop;
            }
        }
    }

otherLoop:
    for (a = 2; a < 10; a++)
    {
        sayi = (a * 10) + 03;

        for (x = 3; x < sayi; x++)
        {
            if (sayi % x == 0)
                break;

            else
            {
                maxdeger = sayi;

                if (maxdeger > 80)
                {
                    printf("max değer: %d\n", maxdeger);
                    toplam = maxdeger + mindeger;
                    printf("toplam: %d\n", toplam);
                    break;
                }

                else
                    continue;
            }
        }
    }
    return 0;
}


//#include <stdio.h>  ******93 yok ama kontrol ettirdim yine de******

int main()
{
    int a, x, sayi, mindeger = 0, maxdeger = 0,toplam=0;
    for (a = 1; a < 10; a++)
    {
        sayi = (a * 10) + 03;

        for (x = 3; x < sayi; x++)
        {
            if (sayi % x == 0)
                break;

            else
            {
                mindeger = sayi;
                printf("mindeger: %d \n", mindeger);
                goto otherLoop;
            }
        }
    }

otherLoop:
    for (a = 2; a < 10; a++)
    {
        sayi = (a * 10) + 03;

        for (x = 3; x < sayi; x++)
        {
           if (sayi % x == 0)
                break;

            else{
                maxdeger = sayi;

            if (maxdeger > 80){
                
                if(maxdeger>90){
                    printf("max değer:%d\n",maxdeger);
                    break;
                }
                
                else{
                printf("max değer: %d\n", maxdeger);
                toplam=maxdeger+mindeger;
                printf("toplam: %d\n" ,toplam);
                break;
                }
            }
                
            else
                continue;
            }
        }
    }
    return 0;
}
//dcndjkcndjcnd
//djucndbjcbdjcbdjcdb

////fkgmklskmsdklfmdmklfmdlf