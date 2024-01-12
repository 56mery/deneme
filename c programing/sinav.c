//Kullanıcıdan dizi uzunlugunu (n) alınız. N adet sayı alarak diziye ekleyiniz. Diziyi ters sırada yazdırınız.
int main() {
    int n,i;
    
    printf("dizinin uzunlugunu girnizn:");
    scanf("%d" ,&n);
       int dizi[5]; //burada 5 yerine n var c compiler da çalışıyor ama burda hata veriyor ondan 5 yazdım
    
    for(i=0; i<n; i++){
        printf("%d. elemani giriniz:" ,i+1);
        scanf("%d" ,&dizi[i]);
        // toplam+=dizi[i]; topalmını da diğer soruda istemiş tekrar yazmaya gerek yok buraya ekledim sadece ustte toplam declare etmek lazım int toplam=0;
    }
    
     //printf("%d toplam" ,toplam);

    for(i=n-1; i>=0; i--){
        printf("%d" ,dizi[i]);
    }
    
    return 0;
} 


//
int main() {
    int n,i,toplam=0;
    printf("dizinin uzunlugunu girnizn:");
    scanf("%d" ,&n);

    int dizi[5];
    
    for(i=0; i<n; i++){
        printf("%d. elemani giriniz:" ,i+1);
        scanf("%d" ,&dizi[i]);
        toplam+=dizi[i];
    }
    
    printf("%d toplam" ,toplam);
    
    return 0;
}