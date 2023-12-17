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

//matrix oluşturma ve determinant

int main() {
    int det=0;
   int matrix[2][2];
   int i,j;
   for(i=0; i<2; i++){
     for(j=0; j<2; j++){
         printf("matrix[%d][%d] için değer giriniz:" ,i,j);
         scanf("%d" ,&matrix[i][j]);
     }
   }
   
   for(i=0; i<2; i++){
       for(j=0; j<2; j++){
           printf("matrix[%d][%d]=%d\n" ,i,j,matrix[i][j]);
       }
   }
   
   printf("\n determinant gösterimi:\n");
   
   for(i=0; i<2; i++){
       printf("|");
       for(j=0; j<2; j++){
           printf("%d \t" ,matrix[i][j]);
       }
       printf("|");
       printf("\n");
   }
   
   det=(matrix[0][0] * matrix[1][1])-(matrix[0][1] * matrix[1][0]); //dikkat sadece 2x2 için geçerli
   printf("matrix determinanti=%d" ,det);

    return 0;
}
