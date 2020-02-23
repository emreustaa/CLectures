//
//  VeriTipleri.c
//  PointersExamples
//
//  Created by BioCom IT Systems on 9.11.2019.
//  Copyright © 2019 BioCom IT Systems. All rights reserved.
//
 
#include <stdio.h>

enum boolean{false,true};
struct ogrenciler {
    
    char ad[20];
    char soyad[30];
    int no;
    int yas;
}o2;

int main(){
    
    struct ogrenciler o1;
    o2.no=124;
    printf("Ogrenci ad giriniz \n");
    gets(o2.ad);
    puts(o2.ad);
    
//    printf("%s\n",o2.ad);
    
    enum boolean dogruMu=true;
    
    int sayi=5;
//
//    if(sayi<0){
//        dogruMu = true;
//        return printf("%d",dogruMu);
//    }else{
//
//        dogruMu = false;
//        return printf("%d",dogruMu);
//    }
    
    
    
    
    
    
//    int sayi=4;
//    int *ptr;
//    ptr= &sayi;
//    printf("%p\n",ptr);
    
}
