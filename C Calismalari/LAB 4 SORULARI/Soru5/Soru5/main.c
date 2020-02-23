#include <stdio.h>
#include <math.h>
#define ustal(x,y) (pow(x,y))

int armstrong(int);
int basamakSayi(int);

int main(int argc, const char * argv[]) {
    
    int gsayi=0;
    printf("Bir sayi giriniz\n");
    scanf("%d",&gsayi);
    printf("sayi %d is armstrong = %d ",gsayi,armstrong(gsayi));
    return 0;
}

int armstrong(int sayi){
    
    int bsayi = basamakSayi(sayi);
    int toplam=0;
    int tempsayi = sayi;
   
    
    while (tempsayi >0){
        
        int birler = tempsayi /10;
        toplam = toplam + (ustal(birler, bsayi));
        tempsayi = tempsayi /10;
        }
    
    if(sayi== toplam){
        return 1;
    }else{
        return 0;
    }
    
}

int basamakSayi(int sayi){
    int bsayi = 0;
    while (sayi>0){
        sayi = sayi /10;
        bsayi++;
        
    }
    return bsayi;
}
