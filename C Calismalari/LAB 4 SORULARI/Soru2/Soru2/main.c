#include <stdio.h>
#define carp(x,y) x*y

int factor (int);

int main(int argc, const char * argv[]) {
    int sayi=0;
    printf("Bir sayi giriniz \n");
    scanf("%d",&sayi);
    printf("Faktoriyel = %d\n",factor(sayi));
}

int factor(int sayi){
    
    int sonuc =1;
    
    for (int i=1; i<=sayi; i++) {
        sonuc = carp(sonuc,i);
    }
    return sonuc;
    
    
}
