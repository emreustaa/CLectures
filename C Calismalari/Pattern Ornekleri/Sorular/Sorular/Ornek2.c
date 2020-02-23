#include <stdio.h>

int main(){

    int satir,i,j;
    printf("Satir ve sutun sayisini giriniz\n");
    scanf("%d",&satir);
    
    for (i=0; i<satir; i++) {
        for (j=0; j<=i; j++) {
            printf("*");
           
        } printf("\n");
    }
}
