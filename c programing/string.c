
//strinkler
int main()
{
   char nick[10];
   int d;
   printf("dizinin uzunlugunu giriniz:");
   scanf("%d" ,&d);
   while(1){
       if(d>10){
       printf("dizi için boyut çok uzun. lütfen tekrar bir boyut giriniz:");
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

