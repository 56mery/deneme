//strlen without strlen
int mystrlen(char *x){
    int sayac=0;
   
    for(int i=0; *(x+i)!='\0'; i++){
        sayac++;
        
        if(*(x+i)==32)
        sayac--;
    }
    
    return sayac;
}

int main() {
   char str[100];
   int leght;
   
   printf("bir kelime/cümle giriniz:");
   gets(str);
   
   leght=mystrlen(str);
   
   printf("str leght %d" ,leght);
   
    return 0;
}


//strupr
void mystrupr(char *x){
   
    for(int i=0; *(x+i)!='\0'; i++){
       if(*(x+i)>='a' && *(x+i)<='z')
       *(x+i) = -32+ *(x+i);
         printf("%c",*(x+i));
    }
}

int main() {
   char str[100];
   int leght;
   
   printf("bir kelime/cümle giriniz:");
   gets(str);
   
  mystrupr(str);
   
    return 0;
}


//srtlwr
void mystrlwr(char *x){
    
    for(int i=0; *(x+i)!='\0'; i++){
       if(*(x+i)>='A' && *(x+i)<='Z')
       *(x+i) = +32+ *(x+i);
         printf("%c",*(x+i));
    }
}

int main() {
   char str[100];
   int leght;
   
   printf("bir kelime/cümle giriniz:");
   gets(str);
   
  mystrlwr(str);
   
    return 0;
}


//strcat
void mystrcat(char *x, char *y){
   int i=0,j=0;
   
   while(*(x+i)!='\0'){
       printf("%c" ,*(x+i));
       i++;
   }
   
   for(j=0; *(y+j)!='\0'; j++){
       *(x+i)=*(y+j);
       printf("%c" ,*(x+i));
   }
    
}

int main() {
   char str1[100], str2[100];
   int leght;
   
   printf("bir kelime/cümle giriniz:");
   gets(str1);
   printf("bir kelime/cümle giriniz:");
   gets(str2);
   
  mystrcat(str1 , str2);
   
    return 0;
}


//strncat
void mystrncat(char *x, char *y ,int n){
   int i=0,j=0;
   
   while(*(x+i)!='\0'){
       printf("%c" ,*(x+i));
       i++;
   }
   
   for(j=0; j<n ; j++){
       *(x+i)=*(y+j);
       printf("%c" ,*(x+i));
   }
    
}

int main() {
   char str1[100], str2[100];
   int n;
   
   printf("bir kelime/cümle giriniz:");
   gets(str1);
   printf("bir kelime/cümle giriniz:");
   gets(str2);
   printf("enter n:");
   scanf("%d" ,&n);
   
  mystrncat(str1 , str2 ,n);
   
    return 0;
}


//strcpy
void mystrcpy(char *x, char *y){
   int i=0,j=0;
   
   for(j=0; *(y+j)!='\0' && *(x+i)!='\0'; j++){
       *(x+i)=*(y+j);
       printf("%c" ,*(x+i));
   }
    
}

int main() {
   char str1[100], str2[100];
  
   printf("bir kelime/cümle giriniz:");
   gets(str1);
   printf("bir kelime/cümle giriniz:");
   gets(str2);
  
  mystrcpy(str1 , str2);
   
    return 0;
}


//strnpy
void mystrcat(char *x, char *y ,int n){
   int i=0,j=0;
   
   for(j=0; (*(y+j)!='\0' && *(x+i)!='\0') && j<n ; j++){
       *(x+i)=*(y+j);
       printf("%c" ,*(x+i));
   }
    
}

int main() {
   char str1[100], str2[100];
   int n;
  
   printf("bir kelime/cümle giriniz:");
   gets(str1);
   printf("bir kelime/cümle giriniz:");
   gets(str2);
   printf("enter n:");
   scanf("%d" ,&n);
  
  mystrcat(str1 , str2 ,n);
   
    return 0;
}


//strcmp en detaylı vers
int mystrcat(char *x, char *y){
   int i=0,j=0,esit=0,sayac1=0,sayac2=0;
   
   while(*(x+i)!='\0'){
       sayac1++;
       i++;
   }
  
  while(*(y+i)!='\0'){
       sayac2++;
       i++;
   }
  
  if(sayac1<=sayac2){
      for(i=0;*(y+i)!='\0'; i++){
       if(*(x+i)==*(y+i))
       esit++;
       if(esit<sayac2)
       continue; 
      }
  }
  
  if(sayac1>=sayac2){
      for(i=0;*(x+i)!='\0'; i++){
       if(*(x+i)==*(y+i))
       esit++;
       if(esit<sayac1)
       continue;
      }
  }
  
  return esit;
}

int main() {
   char str1[100], str2[100];
   int n;
   int esit=0;
  
   printf("bir kelime/cümle giriniz:");
   gets(str1);
   printf("bir kelime/cümle giriniz:");
   gets(str2);
  
   //nie hata veriyo bilmiom ama doğru esit=mystrcat(str1 , str2);
  
 if(esit!=0) printf("kelimeler/cümleler eşit");
 else printf("cümleler/kelimeler farkli");
   
    return 0;
}



//strncmp