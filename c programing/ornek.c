// girilen sayıya kadar olan toplam
// #include <stdio.h>

int main()
{
    int sayi, x, toplam;
    printf("bir sayi giriniz:");
    scanf("%d", &sayi);

    for (x = 1; x <= sayi; x++)
    {
        toplam += x;
    }
    printf("toplam:%d", toplam);

    return 0;
}

// girilen sayıyA KADAR OLAN TEK TOPLAM
// #include <stdio.h>

int main()
{
    int sayi, tektoplam, x, cifttoplam;
    printf("bir sayi giriniz:");
    scanf("%d", &sayi);

    for (x = 0; x <= sayi; x++)
        if (x % 2 == 0)
        {
            cifttoplam += x;
        }
        else
            tektoplam += x;

    printf("toplam:%d", tektoplam);

    return 0;
}

// yarıçapı girilenin alan ve cevresi
// #include <stdio.h>

int main()
{
    int r, cevre, alan;
    printf("bir sayi giriniz:");
    scanf("%d", &r);

    cevre = 2 * 3 * r;
    alan = 3 * r * r;
    printf("alani: %d ve cevresi: %d", alan, cevre);

    return 0;
}

// girilen sayıya kadar olan sayıların karesinin toplamı
// #include <stdio.h>

int main()
{
    int sayi, carpim = 1, kare, x;
    printf("bir sayi giriniz:");
    scanf("%d", &sayi);

    for (x = 1; x <= sayi; x++)
    {
        carpim = carpim * x;
        kare = carpim * carpim;
    }

    printf("kare: %d", kare);

    return 0;
}

// girilen sayılardan en büyük buldurma
// #include <stdio.h>

int main()
{
    int sayi, sayi2, sayi3;

    printf("bir sayi giriniz:");
    scanf("%d", &sayi);

    printf("bir sayi giriniz:");
    scanf("%d", &sayi2);

    printf("bir sayi giriniz:");
    scanf("%d", &sayi3);

    if (sayi < sayi2)
    {
        if (sayi2 < sayi3)
            printf("en büyük %d", sayi3);
        else
            printf("en büyük %d", sayi2);
    }
    else
    {
        if (sayi < sayi3)
            printf("en büyük %d", sayi3);
        else
            printf("en büyük %d", sayi);
    }

    return 0;
}


//en büyük uc basamklı asal sayı bulduran döğru program
//#include <stdio.h>

int main()
{

    long long int x, i;
    int noasalsayac;

    for (x = 999; x >= 100; x--)
    {
        noasalsayac = 2;

        if (x % 2 == 0)
        {
            continue;
        }

        else
        {
            for (i = 3; i < x; i++)
            {
                if (x % i == 0)
                {
                    noasalsayac += 1;
                    if (noasalsayac >= 3)
                        break;
                    else
                        continue;
                }
            }
            if (noasalsayac == 2)
            {
                printf("en büyük asal sayı: %lld \n", x);
                break;
            }
        }
    }

    return 0;
}





//En büyük üç basamaklı asal sayıyı bulduran program son hali 
//#include <stdio.h>

int main()
{
    long long int x, i;
    int noasalsayac;

    for (x = 999; x >= 100; x--)
    {
        noasalsayac = 2;

        if (x % 2 == 0)
        {
            continue;
        }
        else
        {
            for (i = 3; i < x; i++)
            {
                if (x % i == 0)
                {
                    noasalsayac += 1;
                    if (noasalsayac >= 3)
                        break;
                    else
                        continue;
                }
            }

            if (noasalsayac == 2)
            {
                printf("En büyük asal sayı: %lld \n", x);
                break;
            }
        }
    }

    return 0;
}



//#include <stdio.h>
//üs alma
int main(){
     
    int i=0,sayi,üs,carpim=1;
    printf("ana sayıyı giriniz:");
    scanf("%d" ,&sayi);
    printf("üssü giriniz:");
    scanf("%d" ,&üs);
    
    while(i<üs){
        carpim*=sayi;
        i++;
    }
    
    printf("%d üssü %d = %d" ,sayi,üs,carpim);
    
    
    return 0;
 
 }
 

 //#include <stdio.h>
 //iki sayı arası sayıları toplar

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
 
 
//#include <stdio.h>
//15 satıda carpim tablosu yapınca kızlar :)
//paron 14 müş

int main()
{
    int i,a,carpim;
    
    for(i=1; i<10; i++){
        for(a=0; a<10; a++){
            carpim=i*a;
            printf("%d çarpı %d =%d \n" ,i,a,carpim);
        }
    }
    return 0;
}



 int ortakcarpan=0,xcarpan=0,ycarpan=0,x,a,y;
/*  for(x=10; x<100; x++){
      for(y=10; y<100; y++){
          for(a=2; a<y; a++){
              if(y%a==0){
                  if(x%a==0)
                  break;
                   else
                   ycarpan+=a;
              }
              else{
                  if(x%a==0)
                  xcarpan+=a;
                  else{
                  printf("%d ve %d aralarında asaldır\n",x,y);
                  break;}
              }
          }
      }
  }
*/

//dizi elemanı toplamı
int main(){
int array[5] = {1,2,3,0,0} , toplam;
    
    for(int i=0; i<5; i++){
    toplam+=array[i];
    }
    printf("toplam %d" ,toplam);
}       

// herhangi bi değişikilk githubdan 
// yeni bir değişiklik yapıyorum
