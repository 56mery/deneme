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