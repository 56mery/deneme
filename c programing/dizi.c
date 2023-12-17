//BİSMİLLAH

int main() {
   int x=0,max=0,min=0,toplam=0;
   int num[4];
   
   for(x=0; x<4; x++){
       printf("%d.nci elemani girmniz:" ,x+1);
       scanf("%d" ,&num[x]);
   }
   
   for(x=0; x<4; x++){
       printf("num[%d]= %d \n" ,x,num[x]);
       toplam+=num[x];
   }
   
   min=num[0];
   max=num[0];
   
   for(x=0; x<4; x++){
       if(num[x]>max){
           max=num[x];
       }
       if(num[x]<min)
       min=num[x];
   }
   
   printf("en büyük eleman %d ve en küçük eleman %d\n" ,max,min);
   printf("dizinin elemanları ortalaması %d",toplam/4 );
  

    return 0;
}

//abi yaptım :") (şimdi de pull yapıcam )
//yaappptttııımmm şükür 
