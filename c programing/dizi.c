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


//transpoz bulma

int main() {
   int A[3][3], B[3][3];
   int row,col,sem;
   
   printf("3x3 lük matrisin elemanlaririni giriniz:\n");
   for(row=0; row<3; row++){
       for(col=0; col<3; col++){
           scanf("%d" ,&A[row][col]);
       }
   }
   
   for(row=0; row<3; row++){
       for(col=0; col<3; col++){
           printf("A[%d][%d]=%d \t" ,row,col,A[row][col]);
       }
       printf("\n");
   }
   
   for(row=0; row<3; row++){
       for(col=0; col<3; col++){
           B[row][col]=A[col][row];
           printf("A nın transpozu:%d \t" ,B[row][col]);
       }
       printf("\n");
   }

    return 0;
}


//matris oluşturma ve elemanların işaret durumu
int main()
{
   int A[3][3], B[3][3];
   int row,col,sem,toplam=0;
   
   printf("3x3 lük matrisin elemanlaririni giriniz:\n");
   for(row=0; row<3; row++){
       for(col=0; col<3; col++){
           scanf("%d" ,&A[row][col]);
       }
   }
   
   for(row=0; row<3; row++){
       for(col=0; col<3; col++){
           printf("A[%d][%d]=%d \t" ,row,col,A[row][col]);
       }
       printf("\n");
   }
   
   for(row=0; row<3; row++){
       for(col=0; col<3; col++){
           if(A[row][col]<0){
               printf("negatif elemanlar A[%d][%d]=%d \n" ,row,col,A[row][col]);
           }
           else{
               printf("pozitif elemanlar A[%d][%d]=%d\n" ,row,col,A[row][col]);
           }
           toplam+=A[row][col];
       }
   }
   printf("elemanlar toplami:%d" ,toplam);


    return 0;
}


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

//düzeltme 