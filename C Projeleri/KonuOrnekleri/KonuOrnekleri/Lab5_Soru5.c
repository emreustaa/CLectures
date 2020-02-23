#include <stdio.h>

void ogrenciKayit(void);
void menuGoster(void);
void ogrenciListele(void);
void dersKayit(void);
void ogrenciBul(void);

struct ogrenci {
    
    int no;
    char ad[10];
    char dersler[10];
    short sinif;
}ogrenciler[10];

int main(){
    
    typedef enum {false=0, true=1} bool;
    bool isExitting = true;
    
    
    while(isExitting){

        menuGoster();
        
            printf("Hangi islemi yapacaksiniz?\n");
            int secilen=0;
            scanf("%d",&secilen);
        
            switch (secilen) {
                case 1:
                    ogrenciKayit();
                    break;
                case 2:
                    dersKayit();
                    break;
                case 3:
                    ogrenciBul();
                    //ogrenciListele();
                    break;
                case 4:
                    isExitting = false;
                    break;
                    
            }
            
        }
        
    }
    
void menuGoster(void){
       
       printf("Menü\n");
       printf("-------\n");
       printf("1-Öğrenci Kayıt\n");
       printf("2-Öğrenci Ders Kayıt\n");
       printf("3-Kayıtları Listele\n");
       printf("4-Çıkış Yap\n");
       printf("-------\n");
      
}
void ogrenciKayit(void){
    
    int sizeOgrenciler = sizeof(ogrenciler)/sizeof(ogrenciler[0]);
    
    for (int i=0; i<sizeOgrenciler; i++) {
        
        printf("Ogrenci adi giriniz\n");
        scanf("%s",ogrenciler[i].ad);
        printf("Ogrenci no giriniz\n");
        scanf("%d",&ogrenciler[i].no);
        printf("Ogrenci sinif giriniz\n");
        scanf("%hd",&ogrenciler[i].sinif);
    }
    
}
/*
void ogrenciListele(void){
    
    int sizeOgrenciler = sizeof(ogrenciler)/sizeof(ogrenciler[0]);
    printf("Kayitli ogrenciler:\n");
    for (int i=0; i<sizeOgrenciler; i++) {
        
        printf("Ogrenci adi : %s\n",ogrenciler[i].ad);
        printf("Ogrenci no :  %d\n",ogrenciler[i].no);
        printf("Ogrenci sinif : %hd\n",ogrenciler[i].sinif);
        printf("Ogrencinin dersi : %s\n",ogrenciler[i].dersler);
    }
    
    
}*/

void dersKayit(void){
    
    
    int sizeOgrenciler = sizeof(ogrenciler)/sizeof(ogrenciler[0]);
    printf("Ders giriniz\n");
    for (int i=0; i<sizeOgrenciler; i++) {
        
        printf("Ders giriniz\n");
        scanf("%s",ogrenciler[i].dersler);
    }
   
}
void ogrenciBul(void){
    
    int gelenNo=0;
    printf("Ogrenci numarasi giriniz\n");
    scanf("%d",&gelenNo);
    
    int sizeOgrenciler = sizeof(ogrenciler)/sizeof(ogrenciler[0]);
    printf("Sistemde yer alan ogrenciler :\n");
    
       for (int i=0; i<sizeOgrenciler; i++) {
           
           if(gelenNo == ogrenciler[i].no){
               
               printf("Ogrenci adi : %s\n",ogrenciler[i].ad);
               printf("Ogrenci no :  %d\n",ogrenciler[i].no);
               printf("Ogrenci sinif : %hd\n",ogrenciler[i].sinif);
               printf("Ogrencinin dersi : %s\n",ogrenciler[i].dersler);
           }
       }
     printf("Sistemde kayitli ogrenci bulunmamaktadir.\n");
      
    
}


