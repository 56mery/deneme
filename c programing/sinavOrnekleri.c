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


/*

int main(){
  struct person *ptr;
  int i,n;
  
  printf("enter person number:");
  scanf("%d" ,&n);
  
  ptr=(struct person*) malloc(n * sizeof(struct person));
  
  for(i=0; i<n; i++){
      printf("enter name and age");
      scanf("%s %d" ,(ptr+i)->name, &(ptr+i)->yas);
  }
  
   for(i=0; i<n; i++){
       printf("name %s age %d\n" ,(ptr+i)->name,(ptr+i)->yas);
   }
  
    return 0;
}
*/


//
int main(){
   int n,sayac=0;
   char *p;
   char *gün[]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
   
   p=gün[0];
 
   
   while(1){
       
       printf("bir sayi giriniz:");
       scanf("%d" ,&n);
       if(n<=7 && n>=1){
           p=gün[n-1];
           break;
           }
           else{
           sayac++;
           if(sayac>3 && n>7)
           printf("1 le 7 arasinda bir sayi giriniz.\n");
           }
   }
   
   printf("sectiginiz gün %s " ,p);
 
    return 0;
}


//chatin soruları
int main() {
    int tekSayac=0;
    int ciftSayac=0;
   int arr[]={2,1,4,3,2,6,7};
   int i;
   for(i=0; arr[i]!=0; i++){
       if(arr[i]%2==0){
           ciftSayac++;
       }
       else
       tekSayac++;
   }
   
   printf("tek sayilar %d" ,tekSayac);

    return 0;
}



//tersten yazma dogru hali
int main() {
    char str[20];
    char str1[20];
    int i=0;
    
    printf("bir string giriniz:");
    gets(str);
    
    while(str[i]!='\0'){
        i++;
    }
    for(int j=0; j<19; j++){
          i--;
        str1[j]=str[i];
    }
    str1[20]='\0';
    printf("%s" ,str1);
   
    return 0;
}


//
struct ogrenci {
    char ad[20];
    char soyad[20];
    int yas;
};

int main() {
  struct ogrenci *ptr,ogr1;
  ptr=&ogr1;
  
  printf("ogrencinin adi: ");
  scanf("%s" ,ptr->ad);
  printf("ogrenciini soyadi:");
  scanf("%s" ,ptr->soyad);
  printf("ogrencinin yasi:");
  scanf("%d" ,&ptr->yas);
  
   printf("ogrencinin adi:%s\n " ,ptr->ad);
    printf("ogrenciini soyadi: %s\n" ,ptr->soyad);
     printf("ogrencinin yasi: %d" ,ptr->yas);
   
    return 0;
}


//
int main() {
    int *p;
    int *p1;
    int  arr[5]={2,5,6,9,8};
    int max;
    int min;
    
    p=&arr[0];
    p1=&arr[0];
    
    max=*p;
    min=*p1;
  
  for(int i=1; i<5; i++){
      if(*(p+i)>max)
      max=*(p+i);
      else if(*(p1+i)<min)
      min=*(p+i);
  }
  
  printf("%d\n" ,max);
  printf("%d" ,min);
   
    return 0;
}


//
int main() {
    int n;
    int *arr;
    printf("dizinin boyutunu giriniz:");
    scanf("%d" ,&n);
    arr=(int *) malloc(n * sizeof (int));
    
    for(int i=0; i<n; i++){
        printf("%d. elemani giriniz" ,i+1);
        scanf("%d" ,&arr[i]);
    }
   
   for(int a=0; a<n; a++){
        printf("%d" ,arr[a]);
   }

    return 0;
}


//
#define topla(a,b) a+b
#define copy(str1,str2) strcpy(str1,str2)
#define cat(str1,str2) strcat(str1,str2)
#define mak(a) fonk(a)

void mak(int a){
    int b;
    for(b=0; b<5; b++){
        printf("%d" ,a);
    }
}

int main()
{
    char dizi[50];
    copy(dizi,"jeon");
    printf("%d\n %s\n" ,topla(3,5) ,cat(dizi,"jungkook"));
    
    mak(5);
  
   return 0;
}


/*
struct bilgi {
    char ad[20];
    char soyad[20];
};

struct yapi {
    int yas;
    struct bilgi b;
};

int main() {
    int n, i;

    printf("kisi sayisini girniz:");
    scanf("%d", &n);

    struct yapi y1[n]; 

    for (i = 0; i < n; i++) {
        printf("ad giriniz:");
        scanf("%s", y1[i].b.ad);
        printf("soyad giriniz:");
        scanf("%s", y1[i].b.soyad);
        printf("yasi giriniz:");
        scanf("%d", &y1[i].yas);
    }

    for (i = 0; i < n; i++) {
        printf("ad: %s\n", y1[i].b.ad);
        printf("soyad: %s\n", y1[i].b.soyad);
        printf("yasi: %d\n", y1[i].yas);
    }

    return 0;
}

*/
