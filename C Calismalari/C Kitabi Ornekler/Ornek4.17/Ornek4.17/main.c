#include <stdio.h>
#define HAFTA 6

void ucretHesapla(int,int);

int main(int argc, const char * argv[]) {
    
    int saatUcret,gunlukSaat;
    
    printf("Gunluk saati giriniz \n");
    scanf("%d",&gunlukSaat);
    printf("Saat ucreti giriniz \n");
    scanf("%d",&saatUcret);
    
    ucretHesapla(gunlukSaat,saatUcret);
    
}

void ucretHesapla(int gunlukSaat,int saatUcret){
    
    int haftalikSaat = gunlukSaat * HAFTA;
    int haftalikUcret = HAFTA * (gunlukSaat * saatUcret);
    
    printf("İsçi haftada %d saat calismaktadir\n",haftalikSaat);
    printf("Isci haftada %d ₺ ucret kazanmaktadir.\n",haftalikUcret);
}
