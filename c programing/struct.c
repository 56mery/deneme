// kisinin verilerini alma
struct kisi
{
    char ad[20];
    char sad[20];
    char ht[20];
    int yas;
} kisi;

int main()
{
    printf("adinizi giriniz:\n");
    gets(kisi.ad);

    printf("soyadinizi giriniz:");
    gets(kisi.sad);

    printf("memleketinizi giriniz:");
    gets(kisi.ht);

    printf("yasinizi giriniz:");
    scanf("%d", &kisi.yas);

    puts(kisi.ad);
    puts(kisi.sad);
    puts(kisi.ht);
    printf("%d", kisi.yas);

    return 0;
}

// örnek2
struct ogr
{
    char ad[15];
    char soyad[15];
    int sinif;
    int vize;
    int final;
} ogr;

int main(void)
{
    float ort;

    printf("adiniz:");
    gets(ogr.ad);
    printf("soyadiniz:");
    gets(ogr.soyad);
    printf("sinifiniz:");
    scanf("%d", &ogr.sinif);
    printf("vize notunuz:");
    scanf("%d", &ogr.vize);
    printf("final notunuz:");
    scanf("%d", &ogr.final);

    ort = (ogr.vize * 40 / 100) + (ogr.final * 60 / 100);
    if (ort >= 55)
    {
        puts(ogr.ad);
        puts(ogr.soyad);
        printf("%d", ogr.sinif);
        printf("\ngeçtiniz");
    }
    else
    {
        puts(ogr.ad);
        puts(ogr.soyad);
        printf("%d", ogr.sinif);
        printf("\nkaldiniz");
    }

    return 0;
}

/* ornek 3
struct ogr
{
    char ad[20];
    char soyad[20];
    int not ;
} ogr[7];

int main()
{
    int i;
    for (i = 0; i < 7; ++i)
    {
        printf("%d. ogrencinin adini giriniz:", i + 1);
        scanf("%s", ogr[i].ad);
        printf("%d ogrencinin soyadini giriniz:", i + 1);
        scanf("%s", ogr[i].soyad);
        printf("%d. ogrencinin notunu giriniz:", i + 1);
        scanf("%d", &ogr[i].not );
    }

    for (i = 0; i < 7; i++)
    {
        puts(ogr[i].ad);
        puts(ogr[i].soyad);
        printf("%d\n", ogr[i].not );
    }

    return 0;
}

/// /// //////////////////////////////////////////////////
    struct ders
{
    int lc;
    int mat1;
    int fizik1;
    int pd;
    int bmg;
};

struct ogr
{
    char ad[20];
    char soyad[20];
    struct ders ders;
} ogr[7];

int main()
{
    int i;

    for (i = 0; i < 7; ++i)
    {
        printf("%d. ogrencinin adini giriniz:", i + 1);
        scanf("%s", ogr[i].ad);
        printf("%d ogrencinin soyadini giriniz:", i + 1);
        scanf("%s", ogr[i].soyad);
        printf("%d. ogrencinin lineer cebir notunu giriniz:", i + 1);
        scanf("%d", &ogr[i].ders.lc);
        printf("%d. ogrencinin calculus notunu giriniz:", i + 1);
        scanf("%d", &ogr[i].ders.mat1);
        printf("%d. ogrencinin fizik notunu giriniz:", i + 1);
        scanf("%d", &ogr[i].ders.fizik1);
        printf("%d. ogrencinin programlama notunu giriniz:", i + 1);
        scanf("%d", &ogr[i].ders.pd);
        printf("%d. ogrencinin bilgisayara giris notunu giriniz:", i + 1);
        scanf("%d", &ogr[i].ders.bmg);
    }

    for (i = 0; i < 7; i++)
    {
        puts(ogr[i].ad);
        puts(ogr[i].soyad);
        printf("linner notu:%d\n", ogr[i].ders.lc);
        printf("mat1 notu:%d\n", ogr[i].ders.mat1);
        printf("fizik1 notu:%d\n", ogr[i].ders.fizik1);
        printf("programlamanotu:%d\n", ogr[i].ders.pd);
        printf("bmg notu:%d\n\n\n", ogr[i].ders.bmg);
    }

    return 0;
}

*/

// quiz sorusu
struct ogrenci
{
    int sinavNotu;
    char ad[20];
    char soyad[20];
};

void ogrencileriGir(struct ogrenci ogr[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("ogrencinin notunu giriniz:");
        scanf("%d", &ogr[i].sinavNotu);
        printf("ogrencinin adini giriniz:");
        scanf("%s", ogr[i].ad);
        printf("ogrencinin soyadini giriniz:");
        scanf("%s", ogr[i].soyad);
    }
}

void ogrencileriListele(struct ogrenci ogr[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("ogrencinin notu: %d\n", ogr[i].sinavNotu);
        printf("ogrencinin adi: %s\n", ogr[i].ad);
        printf("ogrencinin soyadi: %s\n", ogr[i].soyad);
    }
}

void minimumNot(struct ogrenci ogr[5])
{
    int i = 0, min;
    min = ogr[i].sinavNotu;
    for (i = 0; i < 5; i++)
    {
        if (ogr[i].sinavNotu < min)
        {
            min = ogr[i].sinavNotu;
        }
    }
    printf("en düsük sinav notu %d", min);
}

int main()
{
    struct ogrenci ogr[5];

    ogrencileriGir(ogr);
    ogrencileriListele(ogr);
    minimumNot(ogr);

    return 0;
}