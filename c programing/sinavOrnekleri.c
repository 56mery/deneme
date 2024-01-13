// elemanları kopyalama
int main()
{
    int dizi[5] = {4, 5, 6, 7, 8};
    int dizi2[5];
    int i, j = 4; // j=0;

    for (i = 0; i < 5; i++)
    {
        dizi2[j] = dizi[i];
        j--; // j++; için de düz sira ile kopyalar
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d", dizi2[i]);
    }

    return 0;
}

// tekrar edeni buluyor soru tamam ama aklıma bir şey geldi eğer iki farklı sayı tekrar ediyorsa bulamıyor ilk yazdığımın tekrar sayısını buluyor
int main()
{

    int dizi[5];
    int i, j, sayac = 0;

    for (i = 0; i < 5; i++)
    {
        printf("%d. elemani giriniz:", i + 1);
        scanf("%d", &dizi[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            if (dizi[i] == dizi[j] && i != j)
            {
                sayac++;
                dizi[i] -= dizi[j];
            }
        }
    }

    printf("tekrar sayisi %d", sayac);

    return 0;
}

// yardım aldım maalsef :"( 3 X 3 boyutlarında iki matrisin çarpımını hesaplayan C kodu
int main()
{
    int a[3][3] = {{1, 1, 1}, {3, 2, 1}, {3, 0, 0}};
    int b[3][3] = {{2, 2, 2}, {0, 0, 0}, {1, 1, 1}};

    int result[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d %d %d\n", result[i][0], result[i][1], result[i][2]);
    }

    return 0;
}

//cümlede en çok tekrar eden karakteri buluyor
int main()
{
    char str[20];
    int i, j, sayac, max = 0;
    int syc[20];

    printf("bir cümle giriniz:");
    gets(str);

    for (i = 0; i < 20; i++)
    {
        syc[i] = 0;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        sayac = 0;
        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                sayac++;
            }
        }
        syc[i] = sayac;
    }

    for (i = 0; i < 20; i++)
    {
        if (max < syc[i])
        {
            max = syc[i];
        }
    }

    printf("cümlede en cok tekrar eden karakterin tekrar sayisi %d", max);

    return 0;
}


// mukemmel sayi bulduran program
int mukemmelSayi(int sayi)
{
    int i;
    int sayac=0;
    
    for(i=1; i<sayi; i++){
        if(sayi%i==0){
            sayac+=i;
        }
    }
    
    return sayac;
}


int main() {
    int sayi;
    int sonuc=0;
  printf("bir sayi giriniz:");
  scanf("%d" ,&sayi);
  
  sonuc=mukemmelSayi(sayi);
  
  if(sonuc==sayi){
      printf("girdiginiz sayi mukemml sayidir.");
  }
  else
  printf("girdiginiz sayi mukemmel sayi degildir");
  
  return 0;
}


//en yaslı kişiyi adı en uzun kisiyi döndursun iki fonksiyon ayrı ayrı yap(kafamdan salladım)

struct ogrenci{
  char ad[20];
  char soyad[20];
  int yas;
};

int enUzunİsim(struct ogrenci ogr[5]){
    int i=0,max;
    
    max=strlen(ogr[i].ad);
    
    for(i=0; i<5; i++){
        if(max<strlen(ogr[i].ad)){
            max=ogr[i].ad;
        }
    }
    return max;
}

int enYasli(struct ogrenci ogr[5]){
     int i=0,max;
    max=ogr[i].yas;
    
    for(i=0; i<5; i++){
        if(max<ogr[i].yas){
            max=ogr[i].yas;
        }
    }
    
    return max;
}


int main() {
    int i;
    int isim;
    int yasli;
    
    struct ogrenci ogr[5];
    
    for(i=0; i<5; i++){
   printf("adinizi giriniz:");
   scanf("%s" ,ogr[i].ad);
   printf("soyadinizi giriniz:");
   scanf("%s" ,ogr[i].soyad);
   printf("yasinizi giriniz:");
   scanf("%d" ,&ogr[i].yas);
    }
    
    isim=enUzunİsim(ogr);
    yasli=enYasli(ogr);
    
    printf("en uzun isime sahip kisi %d karakterli" ,isim);
    printf("en yasli kisi %d yasinda" ,yasli);
    
    
  return 0;
}