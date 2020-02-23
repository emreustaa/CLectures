#include <stdio.h>

int getiriHesapla (float,float,float);
int main(int argc, const char * argv[]) {
    
    float anaPara,faizOrani,vade;
    
    printf("Ana Parayi giriniz\n");
    scanf("%f",&anaPara);
    printf("Faiz oranini giriniz\n");
    scanf("%f",&faizOrani);
    printf("Vade giriniz\n");
    scanf("%f",&vade);
    
    getiriHesapla(anaPara, faizOrani, vade);
    return 0;
}

int getiriHesapla(float anaPara,float faizOrani,float vade){
    
    float faizGetirisi = anaPara* ((float)(faizOrani *vade)/100);
    
    
    return  printf("Faiz Getirisi %2.2f'₺ dir.",faizGetirisi);
    
    
}
