//easy
int main() {
  int *p;
  int i=30;
  
  p=&i;

  
  printf("pointerin gösterdiği değer %d\n" ,*p);
  printf("pointerin gösterdiği adres %x\n" ,p);
  printf("değiskenin adresi %x\n" ,&i);
  printf("değiskenin değeri %d" ,i);

    return 0;
}


//
int main() {
   int dizi[3]={1,1,1};
   int *p;
   p=&dizi[0];
   int toplam=0,i;
   
   for(int i=0; i<3; i++){
       toplam+=*(p+i);
   }
   
   printf("toplam %d" ,toplam);
  
    return 0;
}


//girilen değerleri topluyor
int main() {
  int x[6],sum=0;
  int i;
  
  printf("6 tane sayı giriniz:");
  for(i=0; i<6; ++i){
      scanf("%d" ,x+i);
     sum+=*(x+i);
  }
  
  printf("sum=%d" ,sum);
    return 0;
}


//pointers değer ve adres farkı
int main() {
  int x[5]= {1,2,3,4,5} ;
  int *ptr;
  
  ptr=&x[0];
  
  printf("adresi %x -> sayi %d\n",ptr,*ptr );
  printf("adresi %x -> sayi %d\n" ,ptr+1,*(ptr+1));
  
  //farklı versiyon aynı şey
  *ptr=x[0];
  printf("adresi %x -> sayi %d\n",ptr,*ptr );
  printf("adresi %x -> sayi %d\n" ,ptr+1,*(ptr+1));
  
  //bir farklı versiyon daha aklıma geldi
  ptr=x;
  printf("adresi %x -> sayi %d\n",ptr,*ptr );
  printf("adresi %x -> sayi %d" ,ptr+1,*(ptr+1));
  
    return 0;
}

//value swap
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main() {
  int num1,num2;
  printf("birinci sayiyi giriniz:");
  scanf("%d" ,&num1);
  printf("ikinci sayiyi giriniz:");
  scanf("%d" ,&num2);
  
  swap(&num1, &num2);
  
  printf("sayi1= %d adresi %x\n" ,num1,&num1);
  printf("sayi2= %d adresi %x" ,num2,&num2);
  
    return 0;
}

  
//
int main() {
  int *pa, *pi;
  int i,a;
  int toplam=0;
 
  printf("birinci sayi:");
  scanf("%d" ,&i);
  printf("ikinci sayi:");
  scanf("%d" ,&a);
  
  pa=&a;
  pi=&i;
  
  toplam=*(pi)+ *(pa);
  printf("iki değer toplami %d" ,toplam);

    return 0;
}

//
int main() {
  int *pa, *pi;
  int i,a;
  int toplam=0;
 
  printf("birinci sayi:");
  scanf("%d" ,&i);
  printf("ikinci sayi:");
  scanf("%d" ,&a);
  
  pa=&a;
  pi=&i;
  
  if((*pa)<(*pi)){
      printf("ikinci pointerin gösterdiği değer daha küçük");
  }
  
  else if((*pa)>(*pi))
{
    printf("ilk pointerin gösterdiği değer daha küçük");
}
else printf("iki pointer aynı değerleri gösteriyor");

    return 0;
}


//////////

int main() {
  int arr[5];
  int *p;
  int i;
  
  for(i=0; i<5; i++){
  printf("arr[%d] giriniz:" ,i+1);
  scanf("%d" ,&arr[i]);
  }
  
  p=&arr[0];
  
  for(i=0; i<5; i++){
      printf("arr[%d]= %d\n" ,i,*(p+i));
  }
  
    
    return 0;
}

//swap
int main() {
    
    int temp,s1,s2;
    int *p, *p2;
    
    printf("bir sayi giriniz:");
   scanf("%d" ,&s1);
     printf("bir sayi giriniz:");
   scanf("%d" ,&s2);
    
    p=&s1;
    p2=&s2;
    
   temp=*p;
   *p=*p2;
   *p2=temp;
    
    
    printf(" %d %d" ,s1,s2);
    
    return 0;
}
  

///  //////

int main() {
    
    char sesli[5]= {'a','e','i','o','\0'};
    char str[30];
    
    int sayac=0;
    
    printf("bir string giriniz: ");
    gets(str);
    
    for(int i=0; str[i]!='\0'; i++){
        for(int j=0; sesli[j]!='\0'; j++){
        if(str[i]==sesli[j]){
            sayac++;
        }
        }
    }
    
    printf("sesli harf sayisi %d" ,sayac);
    
    return 0;
}