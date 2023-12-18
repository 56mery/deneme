
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