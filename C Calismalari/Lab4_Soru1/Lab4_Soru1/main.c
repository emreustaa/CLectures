#include <stdio.h>

int topla(int,int);

int main(int argc, const char * argv[]) {
    int sayi1,sayi2;
    
    printf("Sayilari giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);
    
    printf("%d\n",topla(sayi1,sayi2));
    
}
int topla(int sayi1,int sayi2){
    
    return sayi1 + sayi2;
    
}
