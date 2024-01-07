//kisinin verilerini alma
struct kisi {
    char ad[20];
    char sad[20];
    char ht[20];
    int yas;
} kisi;


int main() {
     printf("adinizi giriniz:\n");
    gets(kisi.ad);
    
     printf("soyadinizi giriniz:");
    gets(kisi.sad);
    
    printf("memleketinizi giriniz:");
    gets(kisi.ht);

    printf("yasinizi giriniz:");
    scanf("%d" ,&kisi.yas);
    
    puts(kisi.ad);
    puts(kisi.sad);
    puts(kisi.ht);
    printf("%d" ,kisi.yas);
   

    return 0;
}


//örnek2
struct ogr{
    char ad[15];
    char soyad[15];
    int sinif;
    int vize;
    int final;
}ogr;

int main(void) {
    float ort;
    
   printf("adiniz:");
   gets(ogr.ad);
   printf("soyadiniz:");
   gets(ogr.soyad);
   printf("sinifiniz:");
   scanf("%d" ,&ogr.sinif);
   printf("vize notunuz:");
   scanf("%d" ,&ogr.vize);
   printf("final notunuz:");
   scanf("%d" ,&ogr.final);
   
   ort=(ogr.vize*40/100)+(ogr.final*60/100);
   if(ort>=55){
       puts(ogr.ad);
       puts(ogr.soyad);
       printf("%d" ,ogr.sinif);
       printf("\ngeçtiniz");
   }
   else{
       puts(ogr.ad);
       puts(ogr.soyad);
       printf("%d" ,ogr.sinif);
       printf("\nkaldiniz");
       
   }
   
    return 0;
}