#include <stdio.h>


int alanHesapla(int kisakenar,int uzunKenar);

int main(void) {
    
    int kisaKenar,uzunKenar;
    printf("Kisa kenari giriniz\n");
    scanf("%d",&kisaKenar);
    printf("Uzun kenari giriniz\n");
    scanf("%d",&uzunKenar);
    
    alanHesapla(kisaKenar,uzunKenar);
    
}

int alanHesapla(int kisaKenar,int uzunKenar){
    
    int alan = kisaKenar * uzunKenar;
    printf("Girilen dikdortgenin alani = %d\n",alan);
    return alan;
}
