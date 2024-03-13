
//stringler
int main()
{
   char nick[10];
   int d;
   printf("nickinizin uzunlugunu giriniz:");
   scanf("%d" ,&d);
   while(1){
       if(d>10){
       printf(" boyut çok uzun. lütfen tekrar bir boyut giriniz:");
       scanf("%d" ,&d);
       }
       else break;
       
   }
   
 printf("bir nick giriniz:");
 scanf("%s" ,nick);
 printf("hi,%s" ,nick);
   
   

    return 0;
}


/* toggle case
#include <stdio.h>
#include <string.h>
*/

void bkharf(char * nick){
    int i=0;
    while(nick[i] != '\0'){
        if(nick[i]>='a' && nick[i]<='z'){
            nick[i]=nick[i]-32;
        }
        else if(nick[i]>='A' && nick[i]<='Z'){
            nick[i]=nick[i]+32;
        }
        i++;
    }
}

int main()
{
  char nick[20] = "JeonJungkook";
  char nick1[20] = "JeonJess";
  
  bkharf (nick);
  printf("%s" ,nick);
  
    return 0;
}


//harf ya da sayı buldurma
void bkharf(char * nick){
    int i=0;
    while(nick[i] != '\0'){
        if(nick[i]>='a' && nick[i]<='z'){
           printf("%c in alphabet \n" ,nick[i]);
        }
        else if(nick[i]>='A' && nick[i]<='Z'){
           printf("%c in alphabet\n" ,nick[i]);
        }
        else{
            printf("%c a number\n" ,nick[i]);
        }
        i++;
    }
}

int main()
{
  char nick[20] = "JeonJungkook97";
  char nick1[20] = "JeonJess";
  
  bkharf (nick);
  printf("%s" ,nick);
  
    return 0;
}

//ters cevirme
int main()
{
  char nick[20] = "JeonJungkook97";
  char nick1[20] = "JeonJess";
  
  int i=0;
  
  for(i=0; i<15; i++){
      for(int j=15; j>0; j--){
          nick[i]=nick[j];
          printf("%c" ,nick[i]);
      }
  }
  
   
    return 0;
}


/// ///  
int main() {
   char name[]="Jeon Jungkook";
   printf("%c %x\n" ,*name ,&name);
  printf("%c" ,*(name+1));
   printf("%c" ,*(name+2));
    printf("%c" ,*(name+3));
   
   char *namekook;
   namekook = name;
   printf("%c" ,*(name+9));
    printf("%c" ,*(name+10));
     printf("%c" ,*(name+11));
      printf("%c" ,*(name+12));
    
    return 0;
}

//strig uzunluğu #include <stdio.h>

int main() {
    char text[100];
    int i,count=0;
    
    printf("bir string giriniz:");
    gets(text);
    
    for(i=0; text[i]!='\0'; i++){
        count++;
    }
    
    printf("stringin uzunluğu: %d" ,count);
    
    return 0;
}

//string uzunluğu space dahil edilmeyen en doğru hali(sonradan aklıma geldi)
//#include <stdio.h>
#define MAX_SİZE 100

int main() {
    char metin[MAX_SİZE];
    int i,sayac=0;
    
    printf("bir string giriniz:");
    gets(metin);
    
    for(i=0; metin[i] !='\0'; i++){
        if(metin[i]==32){ //32 space in ascıı karşılığı
            sayac-=1;
        }
        sayac+=1;
    }
    printf("kelime sayisi %d" ,sayac);
    
    return 0;
}

//iki stringi birleştirir
#define MAX_SİZE 100

int main() {
    char metin[MAX_SİZE] ,metin2[MAX_SİZE] ;
    int i,j;
    
    printf("bir string giriniz:");
    gets(metin);
    printf("bir string daha giriniz:");
    gets(metin2);
    
    i=0;
    while(metin[i] != '\0'){
        i++;
    }
    
    j=0;
    while(metin2[j] != '\0'){
        metin[i]=metin2[j];
        i++;
        j++;
    }
    metin[i]='\0';

    printf("yeni metin %s" ,metin);

    return 0;
}

//iki stringi karşılaştırır
#define MAX_SİZE 100

char compare(char *x, char *y){
    int i=0;
  
       while(x[i]==y[i]){
           if(x[i]=='\0' && y[i]=='\0')
           break;
           i++;
       }
   
   return x[i]-y[i];
}

int main() {
    char metin[MAX_SİZE] ,metin2[MAX_SİZE] ;
    int i,j,ss;
    
    printf("bir string giriniz:");
    gets(metin);
    printf("bir string daha giriniz:");
    gets(metin2);
    
    ss=compare(metin,metin2);
    if(ss==0){
        printf("cümleler/kelimeler aynidir");
    }
    
    else if(ss<0){
        printf("birinci k/c daha kisa");
    }
    else{
        printf("ikinci cümle daha uzun");
    }

    return 0;
}

//büyük harfleri küçük küçük harfleri büyük yapan program
#define MAX_SİZE 100

void toggleCase(char *x){
    int i=0;
  
  while(x[i]!='\0')
{
    if(x[i]>='a' && x[i]<='z'){
        x[i]-=32;
    }
    else if(x[i]>='A' && x[i]<='Z'){
        x[i]+=32;
    }
    i++;
}  
}

int main() {
    char metin[MAX_SİZE] ;

    printf("bir string giriniz:");
    gets(metin);
    
    toggleCase(metin);
    
    printf("yeni metin %s" ,metin);
    

    return 0;
}

//cümlenin içeriğini bulma
#define MAX_SİZE 100

int main() {
    char metin[MAX_SİZE] ;
     int i=0,harf=0,sayi=0,other=0;

    printf("bir string giriniz:");
    gets(metin);
    
     while(metin[i]!='\0')
    {
    if((metin[i]>='a' && metin[i]<='z') || (metin[i]>='A' && metin[i]<='Z')){
      harf++;
    }
    else if(metin[i]>='0' && metin[i]<='9'){
        sayi++;
    }
    else other++;
    
    i++;
    }  
  
    
    printf(" metin %s\n" ,metin);
     printf("harf sayisi %d\n" ,harf);
      printf("sayi sayisi %d\n" ,sayi);
       printf("others sayisi %d" ,other);
    

    return 0;
}