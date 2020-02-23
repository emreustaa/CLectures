#include <stdio.h>

int main(void) {
   
    int sayi1,sayi2,obeb;
    
    printf("Iki adet sayi giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);
    
    for (int i=0; i<sayi1; i++) {
        for (int j=0; j<sayi2; j++) {
            if(sayi2%j ==0 && sayi1%j ==0){
                obeb = j;
            }
            
    }
    }
    printf("Obeb = %d",obeb);
    
}
