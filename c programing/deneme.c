//#include <stdio.h>


int main(){
     
    int toplam=0, sayi1, sayi2, max, min;
    
    printf("bir sayı giriniz:");
    scanf("%d" ,&sayi1);
    
    printf("ikinci sayıyı giriniz:");
    scanf("%d" ,&sayi2);
    
    if(sayi2>sayi1){
        max=sayi2;
        min=sayi1;}
    
    else{
    max=sayi1;
    min=sayi2;}
    
   
    
    while(min<max){
       toplam+=min;
       min++;
   }
    toplam-=min;
    
    printf("%d ve %d arasındaki sayıların toplamı:%d\n" ,min ,max, toplam);
    return 0;
 
 }